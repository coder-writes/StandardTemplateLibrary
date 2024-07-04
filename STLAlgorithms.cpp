#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v= {1,6,2,8,-1,2};

    cout<<all_of(v.begin(),v.end(),[](int x){return x>0;});
    cout<<endl;
    cout<<any_of(v.begin(),v.end(),[](int x){return x<0;});
    cout<<endl;
    cout<<none_of(v.begin(),v.end(),[](int x){return x%2;});
   


    // this is called lambda function
}