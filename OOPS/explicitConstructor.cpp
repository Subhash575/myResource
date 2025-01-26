#include <iostream>
using namespace std;

class Employee
{
    int a;

public:
    Employee(int x)
    {
        a = x;
    }

    // explicit Employee(int x)
    // {
    //     a = x;
    // }

    operator int()
    {
        return a;
    }

    void display()
    {
        cout << a << endl;
    }
};

int main()
{

    // Employee e1 = 10; // basic to class.
    // e1.display();

    Employee e3(10);
    int x = e3; // class to base.
    cout << x << endl;

    // Employee e2(20);
    // e2.display();
    return 0;
}