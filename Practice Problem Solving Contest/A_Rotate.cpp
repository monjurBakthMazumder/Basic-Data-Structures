// Problem Link: https://vjudge.net/contest/780287#problem/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int z = n % 10;
    n /= 10;
    int y = n % 10;
    n /= 10;
    int x = n % 10;
    int abc = x * 100 + y * 10 + z;
    int bca = y * 100 + z * 10 + x;
    int cab = z * 100 + x * 10 + y;
    cout << abc + bca + cab;
    return 0;
}