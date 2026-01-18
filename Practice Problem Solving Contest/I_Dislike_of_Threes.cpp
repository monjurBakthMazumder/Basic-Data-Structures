// Problem Link: https://vjudge.net/contest/780287#problem/I

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int k = 0;
        for (int i = 0; i < n; i++)
        {
            k++;
            while (true)
            {
                if (k % 3 == 0)
                {
                    k++;
                }
                else if (k % 10 == 3)
                {

                    k++;
                }
                else
                {
                    break;
                }
            }
        }
        cout << k << endl;
    }

    return 0;
}