// Problem Link: https://vjudge.net/contest/785738#problem/E

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> D(N + 1);
    for (int i = 1; i <= N; i++)
        cin >> D[i];
    int answer = 0;
    for (int month = 1; month <= N; month++)
    {
        for (int day = 1; day <= D[month]; day++)
        {
            string m = to_string(month);
            string d = to_string(day);

            char c = m[0];
            bool ok = true;
            for (char x : m)
                if (x != c)
                    ok = false;

            for (char x : d)
                if (x != c)
                    ok = false;
            if (ok)
                answer++;
        }
    }
    cout << answer << "\n";
    return 0;
}
