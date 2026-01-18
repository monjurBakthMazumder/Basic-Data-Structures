#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n;
    cin >> s >> n;
    char c;
    string newS = "";
    for (int i = 0; i < s.size(); i++)
    {
        if ('2' <= s[i] && s[i] <= '9')
        {
            int count  = s[i] - '0';
            for (int j = 2; j <= count; j++)
            {
                newS.push_back(c);
            }
        }
        else
        {
            c = s[i];
            newS.push_back(c);
        }
    }
    cout << newS[n-1];

    return 0;
}