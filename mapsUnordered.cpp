#include <bits/stdc++.h>
using namespace std;
void print(unordered_map<int,string> &m)
{
    cout << "Size: " << m.size() << endl;
    for(auto &pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
}
int main ()
{
    // Maps and unordered maps differ by
    // 1. Inbulit Impllementation
    //2. Time Complexity
    //3. Valid Keys
    unordered_map<int, string> m;
    m[1] = "abc"; //Now insertion time complexity is O(1)
    m[5] = "cdc";
    m[3] = "acd";
    m[6] = "a";
    m[9] = "cde";

    // also all other function of unrdered m ap will be ob time complexity of O(1)

    //Note:- Insertion is unordered map is done hash table.so we can't use very complex data type key for exaample if use pair in place of int then it will give compilation error has the calculation of hash value of pairs in not inbulit.
    // in case of maps instertion is done by the comparison method.

    //note:- unordered maps are used where order does not matter. because it time complexity is low.


}