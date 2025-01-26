#include <iostream>
#include <stack>
using namespace std;

string prefixToInfix(string s)
{
    int n = s.size();
    stack<string> st;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] >= 'A' && s[i] <= 'Z' ||
            s[i] >= 'a' && s[i] <= 'z' ||
            s[i] >= '0' && s[i] <= '9')
            st.push(string(1, s[i]));
        else
        {
            string s1 = st.top();
            st.pop();

            string s2 = st.top();
            st.pop();

            string res = '(' + s1 + s[i] + s2 + ')';
            st.push(res);
        }
    }
    string answer = st.top();
    st.pop();
    return answer;
}

int main()
{
    string str = "*+PQ-MN";
    cout << prefixToInfix(str);
}