#include <bits/stdc++.h>
using namespace std;
// the inbuilt sorting function is the fastest method tto sort a array a vector
int main()
{
    int n;
    cin >> n;
    vector<int> a;

    for (int i = 0; i < n;i++)
        cin >> a[i];
    

    sort(a.begin(), a.end());

    for (int i = 0; i < n;i++)
    {
        cout << a[i] << endl;
    }
    
    cout << endl;
}