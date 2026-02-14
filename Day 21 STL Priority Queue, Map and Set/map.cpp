#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp;
    mp["Masum"] = 100;  // O(logN)
    mp["Monjur"] = 200; // O(logN)
    mp["Tahmid"] = 400; // O(logN)
    mp["nahid"] = 0;    // O(logN)

    for (auto it = mp.begin(); it != mp.end(); it++) // O(NlogN)
    {
        cout << it->first << " " << it->second << endl; // O(logN)
    }

    if (mp.count("nahid"))
        cout << "ase\n";
    else
        cout << "nai\n";

    cout << mp["nahid"] << endl;

    if (mp.count("marzan"))
        cout << "ase\n";
    else
        cout << "nai\n";

    cout << mp["marzan"] << endl;
    return 0;
}