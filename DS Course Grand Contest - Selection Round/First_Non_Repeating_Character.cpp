// Problem Link: https://www.hackerrank.com/contests/ds-course-grand-contest-selection-round/challenges/first-non-repeating-character-19-2

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int flag = 0;

    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < s.size(); j++)
        {
            if (i == s.size() - 1 && j == s.size() - 1)
            {
                cout << s[i];
                return 0;
            }

            else if (i != j)
            {

                if (s[i] == s[j])
                {
                    break;
                }
                else if (j == s.size() - 1)
                {
                    cout << s[i];
                    return 0;
                }
            }
        }
    }
    cout << -1;
    return 0;
}