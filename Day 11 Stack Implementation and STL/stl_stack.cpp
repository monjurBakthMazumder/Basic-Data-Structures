#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    while (!st.empty())
    {
        cout << "top " << st.top() << endl;
        st.pop();
    }
    //
    if (!st.empty())
    {
        cout << "top " << st.top() << endl;
    }
    //
    if (!st.empty())
    {
        st.pop();
    }
    return 0;
}