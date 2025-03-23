// Print all the duplicates in the input string.

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void printDuplicates(string s)
{
    int n = s.length();
    unordered_map<char, int> freq;

    for (int i = 0; i < n; i++)
    {
        freq[s[i]]++;
    }

    for (auto i : freq)
    {
        if (i.second > 1)
        {
            cout << i.first << " - " << i.second << endl;
        }
    }
}

int main()
{
    string s;
    getline(cin, s);

    printDuplicates(s);

    return 0;
}