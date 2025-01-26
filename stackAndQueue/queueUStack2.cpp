// Queue using stack optimize approach.
// In this approach top(), pop() function is more expansive it is use only when their
// is more push() operation.
// Here top(), pop() operation take the T.C = O(N).
#include <iostream>
#include <stack>
using namespace std;

class Queue
{
public:
    stack<int> s1;
    stack<int> s2;

public:
    void pushQ(int x)
    {
        s1.push(x);
    }

    int popQ()
    {
        // if (s1.size() == 0)
        //     return -1;

        int el;
        if (s2.size())
        {
            el = s2.top();
            s2.pop();
        }
        else
        {
            while (s1.size())
            {
                s2.push(s1.top());
                s1.pop();
            }
            el = s2.top();
            s2.pop();
        }
        return el;
    }

    int topQ()
    {
        // if (s1.size() == 0)
        //     return -1;

        if (s2.size())
        {
            return s2.top();
        }
        else
        {
            while (s1.size())
            {
                s2.push(s1.top());
                s1.pop();
            }
            return s2.top();
        }
    }

    int sizeQ()
    {
        return s2.size();
    }
};

int main()
{
    Queue q;
    q.pushQ(3);
    q.pushQ(4);
    q.pushQ(5);
    q.pushQ(8);
    q.pushQ(9);
    cout << q.popQ() << endl;
    cout << q.topQ() << endl;
    cout << q.sizeQ() << endl;
    cout << q.popQ() << endl;
    cout << q.sizeQ() << endl;
}