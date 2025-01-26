#include <iostream>
using namespace std;

class Stack
{
    int Top = -1;
    // during implementation of stack size always ask by the interviewer.

    // incorrect
    // int Size = 10;
    // int arr[Size];
    // This above statement is incorrect in the code because of flowing reason
    /*Array size declaration:
The main issue is in the declaration of the array arr. In C++, you cannot use a non-constant expression to specify the size of an array as a class member. The line int arr[Size]; is not valid because Size is not a compile-time constant.*/
    // correct
    //  Method 1.
    /*static const int MAX_SIZE = 10;
    int arr[MAX_SIZE]; */

    // Method 2-->direct size.
    int arr[10];
    int n = 10;

public:
    void push(int x)
    {

        if (Top >= n - 1)
        {
            cout << "stack overflow" << endl;
        }
        else
        {
            Top = Top + 1;
            arr[Top] = x;
            cout << arr[Top] << endl;
        }
    }

    void pop()
    {
        if (Top != -1)
        {
            Top = Top - 1;
        }
        else
        {
            cout << "stack underflow" << endl;
        }
    }

    int top()
    {
        if (Top == -1)
        {
            cout << "Stack is underflow" << endl;
            return -1;
        }

        else
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
    st.push(4);
    st.push(5);
    st.push(9);
    st.push(7);
    st.pop();
    cout << st.top() << endl;
    cout << st.size() << endl;
    cout << "Element in array is: " << endl;
    st.print();

    return 0;
}