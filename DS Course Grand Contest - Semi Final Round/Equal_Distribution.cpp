// Problem Link : https://www.hackerrank.com/contests/ds-course-grand-contest-semi-final-round-a-batch-08/challenges/equal-distribution-7-2

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, k;
    cin >> n >> k;

    long long int receive = k / n;
    long long int remain = k - (receive * n);

    cout << receive << " " << remain;

    return 0;
}