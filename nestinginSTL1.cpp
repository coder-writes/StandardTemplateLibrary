#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<pair<string, string>, vector<int>> mp;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        string fn, ln;
        int cnt;
        cin >> fn >> ln >>cnt;
        for (int j = 0; i < cnt; j++)
        {
            int x;
            cin >> x;
            mp[{fn, ln}].push_back(x);
        }
    }
    for (auto &value : mp)
    {
        cout << "Name: " << (value.first).first << " " << (value.first).second << endl;

        // auto &list = mp.second;

        for (auto &list : value.second)
        {
            cout << list << " ";
        }
        cout << endl;
    }
}