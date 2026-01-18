// Problem Link: https://vjudge.net/contest/780287#problem/F

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n <= 999)
    {
        cout << n;
    }
    else if (n > 999 && n <= 9999)
    {
        cout << (n / 10)*10;
    }
    else if (n > 9999 && n <= 99999)
    {
        cout << (n / 100)*100;
    }
    else if (n > 99999 && n <= 999999)
    {
        cout << (n / 1000)*1000;
    }
    else if (n > 999999 && n <= 9999999)
    {
        cout << (n / 10000)*10000;
    }
    else if (n > 9999999 && n <= 99999999)
    {
        cout << (n / 100000)*100000;
    }
    else if (n > 99999999 && n <= 999999999)
    {
        cout << (n / 1000000)*1000000;
    }

    return 0;
}