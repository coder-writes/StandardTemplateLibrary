#include <bits/stdc++.h>

using namespace std;

int main()
{
    // we can use this lower bound and upper bound functions in sets and map cases too, in the cases o f the maps and sets they use internal tree traversal method to find the lower bound and upper boounnd
     
    int n;
    cin>>n;

    set<int> s;
    map<int,int> mp;

    for(int i=0;i<int(1e6);i++)
    {
        s.insert(rand());
    }

    for(int i=0;i<n;i++)
    {
        auto it = s.lower_bound(rand());
    }
   

}