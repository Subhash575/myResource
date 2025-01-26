#include <iostream>
using namespace std;

// case 1: When global function as a friend.
/*
class Base
{

private:
    int private_member;

protected:
    int protected_member;

public:
    Base(int a, int b)
    {
        private_member = a;
        protected_member = b;
    }
    // void setter(int a, int b)
    // {
    //     private_member = a;
    //     protected_member = b;
    // }

    friend void friendFunction(Base &t);
};

void friendFunction(Base &t)
{
    cout << "private member: " << t.private_member << endl;
    cout << "protected member: " << t.protected_member << endl;
}

int main()
{
    Base work(12, 24);
    // work.setter(12, 24);
    friendFunction(work);

    return 0;
}
*/

// case 2: When another class function/method is friend.
class B; // forward declaration is important in these case.

class A
{
public:
    void memberFunction(B &t);
};

class B
{
private:
    int private_member;

protected:
    int protected_member;

public:
    B()
    {
        private_member = 10;
        protected_member = 20;
    }

    // declaration of friend function:-
    friend void A::memberFunction(B &);
};

// defination of friend function:-
void A::memberFunction(B &t)
{
    cout << "private: " << t.private_member << endl;
    cout << "proteced: " << t.protected_member << endl;
}

int main()
{
    B e1;
    A e2;
    e2.memberFunction(e1);

    return 0;
}