#include <bits/stdc++.h>
using namespace std;
void print(map<int,string> &mp)
{
    cout << "size: " << mp.size() << endl;
    for(auto &it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }
}
int main()
{
    // declaration of the map;
    //maps are associative containers that store elements in a mapped fashion . each element has a key value and the a mapped value  no two mapped value can have same key value.

    // basic syntax of the map;
    //  map(data_type_1,data_type_2) map_name;
    map<int, string> mp;
    // here key value data type is int and mapped value data type is string

    mp[1] = "abc";
    mp[4] = "bdc";
    mp[8] = "cdc";
    mp[2] = "bbc";
    mp[3] = "ily";
    mp[7] = "iykyk";
    print(mp);
    // we can see in the output the map is in the ordered form
    // time complexity of inserting a element in the map is logn and also extraacting a element is also logn
    // so the time complexity of map to print all the elements is nlogn;
    

    // some most common operations that we can do on a map

    // we have a function m.find(key_values) which is used to return the iteraror corresponding to the key value.
    //  Note:- if the given key value is not present then the function will return mp.end();

    auto it = mp.find(4); //time complexity (logn)
    if(it==mp.end())
    {
        cout << "NO Value" << endl;
    }
    else{
        cout << (*it).first << " " << (*it).second << endl;
    }

    // we have one more funtion that is m.erase(key_value or iterator) i.e m.erase ( ) function can work on both irerator and the key values it deletes both key value and the mapped value corresponding to the iterator and key value.

    mp.erase(8); //log(n)
    print(mp);

    auto pr = mp.find(7);  //log(n)
    if (pr != mp.end()) // this condtion to check whether the given key value is present in the map or not.
        mp.erase(pr);

    // mp.clear() is used to delete the whole of the map.

    // NOTE :- the time complexity of the insertion of ant key value is not always log(n) is also depends upon the input value is because insertion is made on the basis of comparison between previous input so it also calculates


}