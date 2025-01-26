#include <iostream>
#include <limits.h>
#include <string>
#include <unordered_map>
using namespace std;

int findSubString(string s)
{
    int ans = INT_MAX;
    unordered_map<int, int> m;
    for (int i = 0; i < s.length(); i++)
    {
        m[s[i]]++;
    }
    int k = m.size();
    int i = 0, j = 0;
    m.clear();
    while (j < s.length())
    {
        m[s[j]]++;
        if (m.size() == k)
        {
            // ans=min(ans,j-i+1);
            while (m.size() == k)
            {
                ans = min(ans, j - i + 1);
                m[s[i]]--;
                if (m[s[i]] == 0)
                {
                    m.erase(s[i]);
                }

                i++;
            }
        }
        j++;
    }
    return ans;
}

int main()
{
    string s = " aabcbcdbc";
    int len = findSubString(s);
    cout << len;
}