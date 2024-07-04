#include <bits/stdc++.h>
using namespace std;

int main()
{
    //unorder set can be used their where ordering does not matterrs fot you, because in unordered set time complexity of the insertion is O(1)

    unordered_set<string> s;

    s.insert("abc");
    s.insert("zsdf");
    s.insert("bcd");
    s.insert("pqr");
    s.insert("amn");

    for(auto &i: s)
    {
        cout << i << endl;
    }
}
