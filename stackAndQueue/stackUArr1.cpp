// Better Approach:-
#include <iostream>
using namespace std;

class Stack
{
    int *arr;
    int Top;
    int Size;

public:
    Stack()
    {
        // Here we taking bydefault size 10.
        Size = 5;
        arr = new int[Size];
        Top = -1;
    }

    Stack(int Size)
    {
        // this is use bcs member variable or method variable have same value.
        this->Size = Size;
        arr = new int[Size];
        Top = -1;
    }

    void push(int x)
    {
        if (Top >= Size - 1)
        {
            cout << "Stack overflow" << endl;
            return;
        }

        Top += 1;
        arr[Top] = x;
    }

    // It will return deleted element.
    // always remeber stack work on LIFO principle.
    int pop()
    {
        if (Top == -1)
        {
            cout << "Stack underflow" << endl;
            return -1;
        }
        int element = arr[Top];
        Top -= 1;
        return element;
    }

    int top()
    {
        if (Top == -1)
        {
            cout << "Stack is empty" << endl;
            return -1;
        }

        return arr[Top];
    }

    int size()
    {
        return Top + 1;
    }

    int print()
    {
        for (int i = 0; i <= Top; i++)
        {
            cout << arr[i] << " ";
        }
    }
};

int main()
{
    Stack st;
    // st.push(2);
    // st.push(4);
    // st.push(7);
    // st.push(5);
    // st.push(6);
    st.pop();
    cout << "Top element in stack: " << endl;
    cout << st.top() << endl;
    cout << "Size of stack: " << endl;
    cout << st.size() << endl;
    cout << "Element in stack: " << endl;
    st.print();
}