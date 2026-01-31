// Problem Link: https://vjudge.net/contest/785738#problem/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        char a = s1[i];
        char b = s2[i];
        if (a == b)
            continue;
        if ((a == '1' && b == 'l') || (a == 'l' && b == '1'))
            continue;
        if ((a == '0' && b == 'o') || (a == 'o' && b == '0'))
            continue;

        flag = 0;
        break;
    }
    cout << (flag ? "Yes" : "No");
    return 0;
}