#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

public:
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

class Queue
{
public:
    int curSize;
    Node *start;
    Node *end;

public:
    Queue()
    {
        curSize = 0;
        start, end = NULL;
    }
    void push(int x)
    {
        Node *n = new Node(x);
        if (curSize == 0)
        {
            start = n;
            end = n;
        }
        else
        {
            end->next = n;
            end = n;
        }
        curSize += 1;
        n = NULL;
        delete n;
    }

    int pop()
    {
        if (curSize == 0)
        {
            if (start == NULL && end == NULL)
                return -1;
            else if (start == NULL)
            {
                end = NULL;
                return -1;
            }
        }
        int topData = start->data;
        Node *temp = start;
        start = start->next;
        delete temp;
        curSize -= 1;
        return topData;
    }

    void print()
    {
        if (curSize == 0)
        {
            cout << "queue is empty.";
        }
        else
        {
            Node *temp = start;
            while (temp)
            {
                cout << temp->data << " ";
                temp = temp->next;
            }
            delete temp;
        }
    }

    int top()
    {
        if (curSize == 0)
        {
            return -1;
        }
        return start->data;
    }

    int size()
    {
        return curSize;
    }
};

main()
{
    Queue q;
    cout << "Push the element:" << endl;
    q.push(3);
    q.push(4);
    q.push(5);
    q.print();
    // q.push(6);
    // q.push(7);
    // q.push(8);
    cout << endl;
    cout << "pop element is:" << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    q.print();
    cout << endl;
    cout << "Again push the element: " << endl;
    q.push(9);
    q.push(7);
    q.push(6);
    q.print();
    cout << endl;
    cout << "Again pop the element: " << endl;
    cout << q.pop() << endl;
    cout << "Element present on queue: " << endl;
    q.print();
    cout << endl;
    cout << "Top element of queue:" << endl;
    cout << q.top();
    cout << endl;
    cout << "Size of queue:" << endl;
    cout << q.size();

    return 0;
}