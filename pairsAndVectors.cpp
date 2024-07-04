#include <bits/stdc++.h>
using namespace std;

int main()
{
    // pair<int, string> p;

    // p = {2, "abcd"};
    // cout << p.first << " " << p.second << endl;
    // pair<int, string> &p1 = p;
    // p1.first = 5;
    // cout << p1.first << " " <<p.second << endl;
    
    int arr1[] = {2, 3, 4, 5};
    int arr2[] = {4, 9, 16, 25};
    pair<int, int> p[4];
    for (int i = 0; i < 4; i++)
    {
        p[i] = {arr1[i], arr2[i]};
    }

    swap(p[0], p[1]);

    for (int i = 0; i < 4;i++)
    {
        cout << p[i].first << " " << p[i].second << endl;
    }
}