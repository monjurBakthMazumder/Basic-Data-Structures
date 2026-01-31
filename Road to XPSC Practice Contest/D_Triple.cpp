// Problem Link: https://vjudge.net/contest/785738#problem/D

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
        vector<int> freq(n + 1, 0);
        int answer = -1;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            freq[x]++;
            if (freq[x] == 3)
                answer = x;
        }
        cout << answer << "\n";
    }
    return 0;
}
