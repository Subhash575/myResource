#include <iostream>
// #include "stackLL.h"  --> header file for linklist implementation
#include "stackLL.h" // --> header file for vector(STL) implementation of stack.
using namespace std;

int main()
{
    Stack<char> s;
    s.push('h');
    s.push('e');
    s.push('l');
    s.push('l');
    s.push('o');

    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}