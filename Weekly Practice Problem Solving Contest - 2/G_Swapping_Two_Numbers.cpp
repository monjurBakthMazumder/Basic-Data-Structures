// Problem Link: https://vjudge.net/contest/783056#problem/G

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    while (true)
    {
        cin >> x >> y;
        if(x==0 && y==0) break;
        if(x <= y) cout << x << " " << y << endl;
        else cout << y << " " << x << endl;
    }
    return 0;
}
