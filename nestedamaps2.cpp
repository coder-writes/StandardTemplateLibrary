#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, multiset<string>> marks_map;
    // we can also take second data type of vactor but after that we have to sort the vector.

    int n;
    cin >> n;
    for (int i = 0; i < n;i++)
    {
        int marks;
        string name;
        cin >> name >> marks;
        // marks_map[marks].insert(name);
        marks_map[-1*marks].insert(name);
    }
    // auto it = (--marks_map.end());
    // while(true)
    // {
    //     auto &students = (*it).second;
    //     int marks = (*it).first;
    //     for(auto student : students)
    //     {
    //         cout << student << " " << marks << endl;

    //     }
    //     if(it==marks_map.begin())
    //         break;

    //     it--;
    // }

    for(auto & mark_students_pr : marks_map)
    {
        auto &students = mark_students_pr.second;
        int marks = mark_students_pr.first;
        for(auto student: students)
        {
            cout << student << " " << (-1 * marks) << endl;
        }
    }
}
