#include <iostream>
using namespace std;

// Template Function in C++
/*
Function templates in C++ are a powerful feature that allows you to write generic functions that can work with any data type. Instead of writing multiple overloaded functions for different data types, you can define a single template function that operates on generic types. The compiler generates the appropriate function instantiation based on the arguments passed to the function.

Defining a Function Template
A function template is defined using the template keyword followed by template parameters inside angle brackets (<>). Here's the basic syntax:

*/
template <typename T>

T maxNum(T a, T b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    cout << maxNum(3, 4) << endl;
    cout << maxNum(3.4, 9.4) << endl;
    cout << maxNum('a', 'b') << endl;
    return 0;
}
