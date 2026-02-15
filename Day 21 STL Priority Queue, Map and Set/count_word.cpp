#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    // getline(cin, s) reads the ENTIRE line including spaces.
    // Example input: "apple banana apple orange"
    getline(cin, s);

    // stringstream acts like a buffer that lets you extract 
    // words from a string as if you were reading from 'cin'.
    stringstream ss(s);
    string word;

    // A map to store: Key (string/word) -> Value (int/frequency)
    map<string, int> mp;

    // 'ss >> word' extracts one word at a time, skipping whitespace.
    while (ss >> word)
    {
        // mp[word] looks for the word. If it doesn't exist, it creates it with value 0.
        // Then ++ increments that value. Complexity: O(log N)
        mp[word]++;
    }

    // ITERATION: Printing the frequency of each word.
    // Since it's a 'map', words will print in alphabetical order.
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        // it->first is the word, it->second is the count.
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}