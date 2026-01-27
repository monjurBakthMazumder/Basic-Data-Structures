// Problem Link: https://www.hackerrank.com/contests/mid-term-exam-a-basic-data-structures-a-batch-08/challenges/is-it-valid-1-1

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        stack<char> st;

        for (char c : s)
        {
            if (!st.empty())
            {
                if ((c == '0' && st.top() == '1') ||
                    (c == '1' && st.top() == '0'))
                {
                    st.pop(); // matched pair removed
                }
                else
                {
                    st.push(c);
                }
            }
            else
            {
                st.push(c);
            }
        }

        if (st.empty())
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
