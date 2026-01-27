// Problem Link: https://vjudge.net/contest/783056#problem/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1;
    for (char c : s1)
    {
        if (c == '0')
        {
            s2.push_back('1');
        }
        else
        {
            s2.push_back('0');
        }
    }
    cout << s2;
    return 0;
}