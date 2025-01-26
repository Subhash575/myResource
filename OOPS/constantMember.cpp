#include <iostream>
using namespace std;

// Code to demonstrate constant Member.
class MyClass
{
    int Data;

public:
    MyClass() : Data(34) {}

    int getData() const
    {
        Data = 89;
        return Data;
    }
};

int main()
{
    MyClass s1;

    cout << "Data: " << s1.getData() << endl;

    return 0;
}