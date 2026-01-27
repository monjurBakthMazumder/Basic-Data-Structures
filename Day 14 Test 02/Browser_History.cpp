// Problem Link: https://www.hackerrank.com/contests/mid-term-exam-a-basic-data-structures-a-batch-08/challenges/browser-history-1

#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> l;
    string s;

    while (cin >> s)
    {
        if (s == "end")
            break;
        l.push_back(s);
    }
    auto cur = l.begin();
    int q;
    cin >> q;
    while (q--)
    {
        string cmd;
        cin >> cmd;

        if (cmd == "visit")
        {
            string address;
            cin >> address;

            bool found = false;
            for (auto it = l.begin(); it != l.end(); it++)
            {
                if (*it == address)
                {
                    cur = it;
                    cout << *cur << "\n";
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                cout << "Not Available\n";
            }
        }
        else if (cmd == "next")
        {
            auto temp = cur;
            temp++;
            if (temp != l.end())
            {
                cur = temp;
                cout << *cur << "\n";
            }
            else
            {
                cout << "Not Available\n";
            }
        }
        else if (cmd == "prev")
        {
            if (cur != l.begin())
            {
                cur--;
                cout << *cur << "\n";
            }
            else
            {
                cout << "Not Available\n";
            }
        }
    }

    return 0;
}
