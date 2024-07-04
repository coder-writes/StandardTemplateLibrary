#include <bits/stdc++.h>
using namespace std;
int main()
{
    //lower bound function of a number in the array is used to find the the element exactly equal to the element or element just greater than the givenn elements if the given number is not present in the array

    int n;
    cin>>n;
    int a[n];
    for(int  i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<endl;

    int *pt = lower_bound(a,a+n,5);
    cout<<(*pt)<<endl;
    int *ptr = upper_bound(a,a+n,5);
    cout<<(*ptr)<<endl;
    // uppper_bound functions returns the positon of the element greater than element next to the given elements.

    // for Vectors we can also use the upper bound and lower bound functions  we just have to use the v.begin(), v.end()

    

}