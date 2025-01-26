#include <iostream>
#include <stack>
using namespace std;

string postfixToPrefix(string s)
{
    int n = s.size();
    int i = 0;
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
            string top1 = st.top();
            st.pop();
            string top2 = st.top();
            st.pop();
            string res = s[i] + top2 + top1;
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
    cout << postfixToPrefix(str);

    return 0;
}
