// Problem Link: https://vjudge.net/contest/780287#problem/J

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s = "";
    s.push_back('L');
    while (n)
    {
        s.push_back('o');
        n--;
    }
    s.push_back('n');
    s.push_back('g');
    cout << s;

    return 0;
}