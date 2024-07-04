#include <bits/stdc++.h>
using namespace std;
void print(set<string> &s)
{
    //there are basically two ways of printing the conrainers or say sets,
    cout << "size: " << s.size() << endl;
    for(auto &value : s)
    {
        cout << value<< endl;
    }
    // for (auto it = s.begin(); it != s.end();it++)
    // {
    //     cout << (*it) << endl;
    // }
    // set always print in the sorted array.
}

int main()
{
    set<string> s;

    s.insert("abc");  //O(logn)
    s.insert("zsdff");
    s.insert("bcd");
    //if we will try to store same string agin then it will not store it as map does it will always store the unique elements
    s.insert("abc");
    //Note:- Most of the operation of the sets is similar to the maps.
    auto it = s.find("bcc");// this is will give the position of iterator
    if(it!=s.end())//this if statement is applied to stop the segmentation fault because if the given element is not present in the set then it will retuen the iterator the s.end()
        s.erase(it);// this erase funtion can work on iterator or direcly giving the value
    print(s);
}