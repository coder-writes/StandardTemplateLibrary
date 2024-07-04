#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    multiset<long long> bags;
    for (int i = 0; i < n; i++)
    {
        /* code */
        long long candy_ct;
        cin >> candy_ct;
        bags.insert(candy_ct);
    }
    long long total_candies = 0;
    for (int i = 0; i < k;i++)
    {
        auto last_it = (--bags.end());
        long long candy_cnt = (*last_it);

        total_candies += candy_cnt;


        bags.erase(last_it);
        bags.insert(candy_cnt / 2);
    }
    cout<<total_candies<<endl;
}