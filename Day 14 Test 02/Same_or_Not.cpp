// Problem Link: https://www.hackerrank.com/contests/mid-term-exam-a-basic-data-structures-a-batch-08/challenges/same-or-not-ii

#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main()
{
    int a, b;
    if (!(cin >> a >> b))
        return 0;
    stack<int> s;
    queue<int> q;

    for (int i = 0; i < a; i++)
    {
        int val;
        cin >> val;
        s.push(val);
    }
    for (int i = 0; i < b; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    if (a != b)
    {
        cout << "NO" << endl;
        return 0;
    }

    bool ok = true;
    while (!s.empty() && !q.empty())
    {
        if (s.top() != q.front())
        {
            ok = false;
            break;
        }
        s.pop();
        q.pop();
    }

    if (ok)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}