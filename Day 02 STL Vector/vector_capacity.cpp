#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {10, 20, 50, 25, 27};
    v.push_back(10);
    cout << v.capacity() << endl;
    cout << v.max_size() << endl;
    cout << v.empty() << endl;
    cout << v.size() << endl;
    v.clear();
    cout << v.size() << endl;
    v.resize(12,10);
    cout << v.size() << endl;
    return 0;
}