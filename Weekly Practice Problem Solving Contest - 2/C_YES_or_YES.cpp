// Problem Link: https://vjudge.net/contest/783056#problem/C

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        for (char &c : s) c = tolower(c);

        if (s == "yes")
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
