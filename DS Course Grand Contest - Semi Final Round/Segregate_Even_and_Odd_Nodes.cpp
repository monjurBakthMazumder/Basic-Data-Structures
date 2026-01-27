// Problem Link : https://www.hackerrank.com/contests/ds-course-grand-contest-semi-final-round-a-batch-08/challenges/segregate-even-and-odd-nodes

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> result;
    vector<int> odd;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        if (val % 2 == 0)
        {
            result.push_back(val);
        }
        else
        {
            odd.push_back(val);
        }
    }
    for (int i = 0; i < odd.size(); i++)
    {
        result.push_back(odd[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}