// given  N strings and Q queries In each Query you are gieven  a string print yes if the string is present else print no;
#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<string> s;
    int n;
    cin >> n;
    for (int i = 0; i < n;i++)
    {
        string str;
        cin >> str;
        s.insert(str);
    }
    int q;
    cin >> q;
    while(q--)
    {
        string str;
        cin >> str;

        if(s.find(str)==s.end())
            cout << "NO" << endl;
        else
            cout << "yes" << endl;
    }
}