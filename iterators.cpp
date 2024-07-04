#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec={2,3,4,6,7,9};
    // declaration of the iterator to a vector

    // An iterator is an object(like a pointer) that points to an element inside the container.We can use iterators to move through the contents of the container.They can be visualized as something similar to a pointer pointing to some location and we can access the content at that particular location using them.
    
    vector<int>::iterator it;
    for (it = vec.begin(); it != vec.end();it++)
    {
        cout <<(*it)<< " ";
    }
    cout << endl;

    // pair<int, int> p;
    // p.first = 1;
    // p.second = 2;
    // p.first = 3;
    // p.second = 4;

    // cout << p.first << " "<< p.second;

    vector<pair<int, int>> v_p={{1,2},{2,3},{3,4},{4,5}};
    // inntialising the iterators to the vector of pairs(vector of pairs means that every element of the vector is pair)
    vector<pair<int, int>>::iterator ite;
    for (ite = v_p.begin(); ite != v_p.end();ite++)
    {
        // this is the one way of printing the pair elements of the vector
        cout << (*ite).first << " " << (*ite).second << endl;
        //this is the one more way of printing the pair elements of the vector

        cout << (ite->first) << " " << (ite->second)<<endl;
    }
}