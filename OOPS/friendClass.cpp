#include <iostream>
using namespace std;

class A
{
private:
    int private_member;

protected:
    int protected_member;

public:
    A()
    {
        private_member = 10;
        protected_member = 20;
    }

    friend class B;
};

class B
{
    int val;

public:
    void methodSetter(A &t)
    {
        cout << "private member: " << t.private_member << endl;
        cout << "proteced member: " << t.proteced_member << endl;
    }
};

int main()
{
    A e1;
    B e2;
    e2.methodSetter(e1);
}