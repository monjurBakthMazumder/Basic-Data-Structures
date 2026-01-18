// STL -> Standard Template Library
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // type 1
    vector<int> v1;
    cout << v1.size() << endl;

    // type 2
    vector<int> v2(5);
    cout << v2.size() << endl;

    // type 3
    vector<int> v3(5, 9);
    for (int i = 0; i < v3.size(); i++)
    {
        cout << v3[i] << " ";
    }
    cout << endl;

    // type 4
    vector<int> v4(v3);
    for (int i = 0; i < v4.size(); i++)
    {
        cout << v4[i] << " ";
    }
    cout << endl;

    // type 5
    int a[5] = {1, 2, 3, 4, 5};
    vector<int> v5(a, a + 5);
    for (int i = 0; i < v5.size(); i++)
    {
        cout << v5[i] << " ";
    }
    cout << endl;

    // type 6
    vector<int> v6 = {1, 2, 3, 4, 6};
    for (int i = 0; i < v6.size(); i++)
    {
        cout << v6[i] << " ";
    }
    cout << endl;

    return 0;
}