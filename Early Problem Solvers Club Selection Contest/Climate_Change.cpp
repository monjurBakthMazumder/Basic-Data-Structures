#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long sum = 0,pra = 0,includes = 0;
    for(int i = 0; i < n; i++) {
        sum += a[i];
    }
    for(int i = 0; i < n - 1; i++) { 
        pra += a[i];
        if(pra * 2 == sum) {
            includes++;
        }
    }
    cout << includes;

    return 0;
}
