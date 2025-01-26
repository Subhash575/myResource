#include <bits/stdc++.h>
using namespace std;

void revString(string str)
{
    int k = str.size() / 2;
    int cnt = 0;
    int s = 0;
    int e = str.size() - 1;
    // inceed of cnt or k we can use start < end logic for even or odd strings.
    while (cnt != k)
    {
        cnt++;
        swap(str[s], str[e]);
        s++;
        e--;
    }
    cout << str;
}

int main()
{
    // reverse a string;
    string s = "subhash";
    revString(s);

    return 0;
}
