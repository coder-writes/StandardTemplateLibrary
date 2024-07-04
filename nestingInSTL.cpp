#include <bits/stdc++.h>
using namespace std;

int main()
{
    // for nested complex Data structure in CPP can also be formed.In case of maps like data structure, maps<data_type1,data_type2> map_name; any data structure can be nested as the key value in the data type 1 which can be compared,because in the  maps insertion is made on the basis of the comparion. we can use pair<int,int> pr; or set<string> st; vector<int> vec; in pairs always first value of the two pair is compared to decide which one is bigger , if the first value of th two pairs is same then we can go the second value . similar type of operation is applied on the vector

    map<pair<int, int>, int> mp;
    pair<int, int> p1 = make_pair(3,6);
    pair<int, int> p2 = make_pair(2, 1);
    cout << (p1 > p2) << endl;

    mp[{5, 3}] = 1; //o(logn)
    mp[{3, 4}] = 2;
    mp[{1, 5}] = 3;
    mp[{2, 6}] = 4;

    for(auto &i: mp)
    {
        cout << (i.first).first<<","<<(i.first).second<<" "<<(i.second) << endl;
    }
}