// Problem Link: https://vjudge.net/contest/780287#problem/H

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int A, B, K;
    cin >> A >> B >> K;

    long long int ARest = A - K;
    if (ARest < 0)
    {
        A = 0;
        long long int BRest = B + ARest;
        if (BRest < 0)
        {
            B = 0;
        }
        else
        {

            B = BRest;
        }
    }
    else
    {
        A = ARest;
    }
    cout << A << " " << B << endl;

    return 0;
}