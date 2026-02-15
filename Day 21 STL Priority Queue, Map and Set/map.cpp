#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Declaration: map<Key_Type, Value_Type>
    // Maps unique keys to specific values.
    map<string, int> mp;

    // INSERTION: O(log N)
    // Every time you insert, the map re-balances its internal tree.
    mp["Masum"] = 100;  
    mp["Monjur"] = 200; 
    mp["Tahmid"] = 400; 
    mp["nahid"] = 0;    

    // ITERATION: O(N) total
    // It uses an "In-order" traversal of the tree, 
    // so keys will print in alphabetical order: Masum, Monjur, Tahmid, nahid.
    // Note: uppercase letters come before lowercase in ASCII (M < n).
    for (auto it = mp.begin(); it != mp.end(); it++) 
    {
        // 'first' is the Key (string), 'second' is the Value (int)
        cout << it->first << " " << it->second << endl; 
    }

    // .count(key): O(log N)
    // Returns 1 if the key exists, 0 if not.
    if (mp.count("nahid"))
        cout << "ase\n"; // Output: ase
    else
        cout << "nai\n";

    cout << mp["nahid"] << endl; // Output: 0

    // IMPORTANT CAVEAT:
    // If you use mp["key"] for a key that DOES NOT exist, 
    // the map automatically creates that key with a default value (0 for int).
    if (mp.count("marzan"))
        cout << "ase\n"; 
    else
        cout << "nai\n"; // Output: nai (initially)

    // This line actually INSERTS "marzan" into the map with value 0.
    cout << mp["marzan"] << endl; 

    return 0;
}