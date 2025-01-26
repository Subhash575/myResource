// Implement Queue using Stack
// This approach is use where less pop(), top() operation in the given problem
// Here push() operation is more exensive then any other operation which take the
// T.C = O(2N).
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
        while (s1.size() != 0)
        {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while (s2.size() != 0)
        {
            s1.push(s2.top());
            s2.pop();
        }
    }

    int popQ()
    {
        if (s1.size() == 0)
            return -1;
        int el = s1.top();
        s1.pop();
        return el;
    }

    int topQ()
    {
        if (s1.size() == 0)
            return -1;
        return s1.top();
    }

    int sizeQ()
    {
        return s1.size();
    }

    // void printQ()
    // {

    // }
};

int main()
{
    Queue q;
    q.pushQ(3);
    q.pushQ(2);
    q.pushQ(1);
    q.pushQ(5);
    cout << q.popQ() << endl;
    cout << q.topQ() << endl;
    cout << q.sizeQ() << endl;

    return 0;
}