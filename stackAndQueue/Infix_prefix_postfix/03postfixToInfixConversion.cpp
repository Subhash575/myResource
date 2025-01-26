#include <bits/stdc++.h>
using namespace std;

string postfixToInfix(string s)
{
    int i = 0;
    int n = s.size();
    stack<string> st;

    while (i < n)
    {
        if (s[i] >= 'A' && s[i] <= 'Z' ||
            s[i] >= 'a' && s[i] <= 'z' ||
            s[i] >= '0' && s[i] <= '9')
        {
            st.push(string(1, s[i]));
        }
        else
        {
            string s2 = st.top();
            st.pop();
            string s1 = st.top();
            st.pop();
            string res = '(' + s1 + s[i] + s2 + ')';
            st.push(res);
        }
        i++;
    }
    string answer = st.top();
    st.pop();
    return answer;
}

int main()
{
    string str = "AB-DE+F*/";
    cout << postfixToInfix(str);

    return 0;
}