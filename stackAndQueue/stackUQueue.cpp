// Here we implement stack using queue.
#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    queue<int> q;

public:
    void stackPush(int x)
    {
        q.push();
        // These will rearrange the queue according to the stack.
        for (int i = 1; i <= q.size(); i++)
        {
            q.push(q.top());
            q.pop();
        }
    }

    int stackPop()
    {
        int element = q.top();
        q.pop();
        return element;
    }

    int stackTop()
    {
        return q.top();
    }

    int stackSize()
    {
        return q.size();
    }
};

int main()
{
    Stack st;
    st.stackPush(3);
    st.stackPush(4);
    st.stackPush(5);
    st.stackPush(6);
    st.stackPush(7);
    cout << "Stack Top: " << st.stackTop() << endl;
    cout << "Poped element: " << st.stackPop() << endl;
    cout << "new Stack Top: " << st.stackTop() << endl;
    cout << "Stack size: " << st.stackSize() << endl;

    return 0;
}