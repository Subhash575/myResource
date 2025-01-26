#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    float y = 5.5;
    cout << &x << endl;
    cout << &y << endl;

    // pointer to pointer
    int a = 3;
    int *b = &a;
    int **c = &b;
    // printing value of a.
    cout << "printing value of a" << endl;
    cout << a << endl;
    cout << *b << endl;
    cout << **c << endl;
    // printing address of a.
    cout << "printing address of a" << endl;
    cout << &a << endl;
    cout << b << endl;
    cout << *c << endl;
    // printing address of b
    cout << "printing address of b" << endl;
    cout << &b << endl;
    cout << c << endl;
    // printing value of b
    cout << "printing value of b" << endl;
    cout << b << endl;
    cout << *c << endl;
    // printing address of c
    cout << "printing address of c" << endl;
    cout << &c << endl;
    // printing value of c
    cout << "printing value of c" << endl;
    cout << c << endl;

    // NULL pointer(we cannot dereference the NULL pointer otherwise it show error)
    int *k = 0;
    int *j = NULL;

    return 0;
}