#include <bits/stdc++.h>
using namespace std;
int main()

{
    vector<int> v = {1, 4, 9, 16, 25, 36};

    cout << "Printing the vector using the usual iterator and for loop  method: " << endl;
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end();it++)
    {
        cout << (*it) << " " ;
    }
    cout << endl;

    cout << "Printing the array using the range based for loop " << endl;
    // vector<int>::iterator ite;

    for(int ite : v)
    {
        cout << ite<<" ";
    }
    cout << endl;
    // this reduces our code much lesser and more readable form
    
    //if we want to make the any change in the original vector then we have to take the vector as refrence rather than a copy.

    cout << "when we take the vector as a copy and trying to multiply each element with 2: "<<endl;
    for(int it: v)
    {
        it = it * 2;
    }
    cout << "This is result: " << endl;
    for (int it : v)
    {
        cout << it << " ";
    }
    cout << endl;
    cout << "Taking the array as refrence and trying to multiply each element by 2: " << endl;
    for(int &it: v)
    {
        it = it * 2;
    }
    cout << "This is the result: " << endl;
    for(int &it:v)
    {
        cout << it << " ";
    }
    cout << endl;

    // there is a autokeyword in the c++ that specifies that the type of variable that is being declared will be automatically deducted from its initializer
    for(auto &p:v)
    {
        cout << (p)<<" ";
    }
    // this auto keyword and range based loops together will help us to counter the bigger codes in to the smaller ones for a little example we can take the example of vector of the pairs

    vector<int> num(5);
    for (auto i = 0; i < 5;i++)
    {
        cin >> num[i];
    }
    // for ( auto &element : num)
    // {
    //     // Code to be executed for each element
    //     // For example, read input from the user
    //     cin >> element;
    // }

    vector<pair<int, int>> square;
    for (auto it = 0; it<5;it++)
    {
        square[it].first = num[it];
        square[it].second = num[it*it];
    }
    cout << "Printing of the vector of  the pairs using auto keyword and range based l;oops: "<<endl;
    for(auto &it:square)
    {
        cout << it.first << "squares" << it.second << endl;
    
    }
}