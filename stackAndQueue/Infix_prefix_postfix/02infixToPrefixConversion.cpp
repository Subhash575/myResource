#include <bits/stdc++.h>
using namespace std;

int priority(char x)
{
    if (x == '^')
    {
        return 3;
    }
    else if (x == '*' || x == '/')
    {
        return 2;
    }
    else if (x == '+' || x == '-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

string infixToPrefix(string s)
{
    reverse(s.begin(), s.end());
    for (int k = 0; k < s.size(); k++)
    {
        if (s[k] == '(')
        {
            s[k] = ')';
        }
        else if (s[k] == ')')
            s[k] = '(';
    }

    int i = 0;
    stack<char> st;
    string ans = "";
    while (i < s.size())
    {
        if (s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z' ||
            s[i] >= '0' && s[i] <= '9')
            ans += s[i];
        else if (s[i] == '(')
            st.push(s[i]);
        else if (s[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                ans += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            if (s[i] == '^')
            {
                while (!st.empty() && priority(s[i]) <= priority(st.top()))
                {
                    ans += st.top();
                    st.pop();
                }
            }
            else
            {
                while (!st.empty() && priority(s[i]) < priority(st.top()))
                {
                    ans += st.top();
                    st.pop();
                }
            }

            st.push(s[i]);
        }
        i++;
    }

    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    string str = "(A+B)*C-D+F";
    string result = infixToPrefix(str);
    cout << result;

    return 0;
}