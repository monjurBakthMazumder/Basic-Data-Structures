// Problem Link: https://www.hackerrank.com/contests/ds-course-grand-contest-selection-round/challenges/selling-online-courses-1

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int x;
    cin >> x;

    if (x == 0)
    {
        cout << 0;
    }
    else
        cout << (500 + (x - 1)) / x;
    return 0;
}