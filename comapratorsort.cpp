
#include <bits/stdc++.h>
using namespace std;

bool should_I_swap(int a , int b)
{
    if(a>b)
        return true;
    else
        return false;
}
// bool should_I_swap(pair<int,int> a , pair<int,int> b)
// {
//     if(a>b)
//         return true;
//     else
//         return false;
// }
int main(){
        int  n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n;i++)
        {
            cin >>arr[i];
        }

            for (int i = 0; i < n; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    if (should_I_swap(arr[i],arr[j]))
                        swap(arr[i], arr[j]);
                }
            }

        for(auto &value : arr)
        {
            cout <<value<< endl;
            ;
        }
        cout << endl;

        return 0;
}