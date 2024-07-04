#include <bits/stdc++.h>
using namespace std;

int main()
{
    multiset<string> s;
    s.insert("abc");
    s.insert("mno");
    s.insert("pqr");
    s.insert("jkl");
    s.insert("pqr");
    s.insert("abc");
    s.insert("mno");

    auto it = s.find("abc"); //this will give the iterator of the given value if there are multiple values are present in the multiset then it will return the iterator of the first occurance

    if((it)!=s.end())
    {
        s.erase(it);
        // since you are padssing the iterator it will only erase that value of the iterator
    }
    s.erase("mno");
    // in this case this will delete all the value with "mno" 

    for(auto &it: s)
    {
        cout << it << endl;
    }
}