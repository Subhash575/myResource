#include <iostream>
using namespace std;

class A
{
public:
    void methodname(int value)
    {
        cout << "Recieve message: " << value << endl;
    }
};

class B
{
public:
    void sendMessageToA(int val)
    {
        A a;
        a.methodname(val);
    }
};

main()
{
    B b;
    b.sendMessageToA(42);

    return 0;
}