#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

class Stack
{
public:
    Node *Top;
    int curSize = 0;

public:
    Stack()
    {
        Top = NULL;
    }

    // push function.
    Node *push(int x)
    {

        Node *temp = new Node(x);
        temp->next = Top;
        Top = temp;
        temp = NULL;
        delete temp;
        curSize += 1;
        return Top;
    }

    // pop function.
    void pop()
    {
        if (Top == NULL)
        {
            cout << "Stack is overflow" << endl;
        }
        else
        {
            curSize -= 1;
            Node *temp = Top;
            Top = Top->next;
            delete temp;
        }
    }

    // print function.(Always remember here top is head).
    void print()
    {
        if (Top == NULL)
        {
            cout << "Stack is empty";
        }

        Node *temp = Top;
        while (temp)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        delete temp;
    }

    // top function/method
    void top()
    {
        if (Top == NULL)
        {
            cout << "Stack is empty." << endl;
        }
        else
        {
            cout << Top->data << endl;
        }
    }
    // size method.
    void size()
    {
        cout << curSize << endl;
    }
};

main()
{
    Stack st;
    Node *head = st.push(3);
    head = st.push(4);
    head = st.push(5);
    head = st.push(8);
    head = st.push(9);
    st.print();
    cout << endl;
    cout << "After the pop operation: " << endl;
    st.pop();
    st.print();
    cout << endl;
    cout << "Size of stack: " << endl;
    st.size();
    cout << "Top element of stack: " << endl;
    st.top();

    return 0;
}