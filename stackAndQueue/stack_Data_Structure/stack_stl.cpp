// stack using stl(library) inbuilt stack.
#include <iostream>
#include <stack> //using stack stl
using namespace std;

int main()
{
    stack<string> books;
    books.push("C++");
    books.push("Java");
    books.push("Python");
    books.push("Golang");

    while (!books.empty())
    {
        cout << books.top() << endl;
        books.pop();
    }

    return 0;
}