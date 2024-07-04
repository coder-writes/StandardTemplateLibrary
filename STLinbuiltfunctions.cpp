#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    vector<int> vec(n);

    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    //min_element() is function used to find the minimum element in the array or the vector . this minimum element return the pointers

    int min =  (*min_element(vec.begin(),vec.end()));
    cout<<"minimum element is "<<min<<endl;
    // in this function we can also edit that from where we want to find the minimum element. by adding the index to the vec.begin()+index,
    //same things happens for the *max_element()

    //accumulate function finds the sum of the whole vector

    int sum = accumulate(vec.begin(),vec.end(),0); //here  last parameter 0 indicates that whether from where we want to initialize our sum.

    cout<<"the total sum is "<<sum<<endl;

    // count function count count the number of times a given element is come in the array.
    
    int cnt = count(vec.begin(),vec.end(),2);
    cout<<"the total count of 2 is "<<cnt<<endl;
    // find function find the the given element in the array or vector and return the itertator of the given elements.

    int pos = *find(vec.begin(),vec.end(),2);
    cout<<"the find function returns "<<pos<<endl;
    // reverse function is use to reverse the array or vector in reverse  order,
    // using the reverse funtion we can also reverse the particular part of the array or pointers.

    reverse(vec.begin(),vec.end());
    cout<<"The reverse order is: "<<endl;
    for(auto &value: vec)
    {
        cout<<value<<" ";
    }

    // this reverse function can also be used in the strings

    string s = "Aditya";

    reverse(s.begin()+2,s.end());


}