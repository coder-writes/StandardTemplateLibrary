#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s; //FILO
    s.push(2);
    s.push(3);
    s.push(1);
    s.push(4);
    s.push(8);
    s.push(4);
    while(!s.empty())
    {
        cout << s.top() << endl;

        s.pop();
    }

    queue<string> q; //FIFO
    q.push("rishi");
    q.push("MANGESH");
    q.push("PARUL");
    q.push("PRIYA");
    q.push("AMAN");
    while(!q.empty())
    {
        cout << q.front() << endl;
        q.pop();

    }
}