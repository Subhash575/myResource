#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    // precomputation
    int hash[26] = {0}; // lower alphabet
    for (int i = 0; i < 26; i++)
    {
        hash[s[i] - 'a'] += 1;
        // Imp: pt to remember here we use the lower case therefore we use -'a' for
        // indexing in case of uppercase we use -'A' for indexing.
    }

    int p;
    cin >> p;
    while (p--)
    {
        char x;
        cin >> x;
        cout << hash[x - 'a'] << endl;
    }

    return 0;
}