// Problem Link: https://vjudge.net/contest/780287#problem/E

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b;
    cin >> a >> b;
    long long int ceilA = a + (b - 1);
    long long int result = ceilA / b;

    cout << result;

    return 0;
}