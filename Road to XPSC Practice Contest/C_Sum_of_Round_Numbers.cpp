// Problem Link: https://vjudge.net/contest/785738#problem/C

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
        vector<int> ans;
        int place = 1;
        while (n > 0)
        {
            int digit = n % 10;
            if (digit != 0)
            {
                ans.push_back(digit * place);
            }
            n /= 10;
            place *= 10;
        }
        cout << ans.size() << "\n";
        for (int x : ans)
            cout << x << " ";
        cout << "\n";
    }
    return 0;
}
