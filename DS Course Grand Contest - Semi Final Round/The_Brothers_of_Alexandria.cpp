// Problem Link : https://www.hackerrank.com/contests/ds-course-grand-contest-semi-final-round-a-batch-08/challenges/the-brothers-of-alexandria

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int gems[n];
    for (int i = 0; i < n; i++)
    {
        cin >> gems[i];
    }
    sort(gems, gems + n);
    cout << gems[k-1];
    return 0;
}