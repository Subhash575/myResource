#include <iostream>
using namespace std;

class Queue
{
    int *q;
    int max_size;
    int s; // start
    int e; // end
    int curSize;

public:
    Queue()
    {
        max_size = 4;
        q = new int[max_size];
        s = -1;
        e = -1;
        curSize = 0;
    }

    Queue(int max_size)
    {
        this->max_size = max_size;
        q = new int[max_size];
        s = -1;
        e = -1;
        curSize = 0;
    }

    void push(int x)
    {
        if (s == -1 && e == -1)
        {
            s += 1;
            e += 1;
            q[e] = x;
            curSize += 1;
        }
        else if (e < max_size && curSize != max_size)
        {
            e += 1;
            q[e] = x;
            curSize += 1;
        }
        else if (e >= max_size && curSize != max_size)
        {
            e = (e + 1) % max_size;
            q[e] = x;
            curSize += 1;
        }
        else
        {
            cout << "queue is overflow" << endl;
        }
    }

    void pop()
    {
        if (s == -1 && curSize == 0)
            cout << "queue is underflow" << endl;
        else if (s < max_size && curSize != 0)
        {
            s += 1;
            curSize -= 1;
        }
        else if (s >= max_size && curSize != 0)
        {
            s = (s + 1) % max_size;
            s += 1;
            curSize -= 1;
        }
        else
        {
            // if(s >= max_size && curSize == 0)
            cout << "queue is underflow" << endl;
        }
    }
    int top()
    {
        if (s == -1)
        {
            cout << "queue is underflow" << endl;
            return -1;
        }
        else
        {
            return q[s];
        }
    }

    int size()
    {
        return curSize;
    }
};

int main()
{
    Queue q1(3);
    q1.push(3);
    q1.push(4);
    q1.push(5);
    q1.push(6);

    cout << "After push" << endl;
    cout << "top: " << q1.top() << endl;
    cout << "queue size: " << q1.size() << endl;

    // q1.pop();
    // q1.pop();
    // q1.pop();
    // cout << "After pop" << endl;
    // cout << "top: " << q1.top() << endl;
    // cout << "queue size: " << q1.size() << endl;

    return 0;
}