#include <iostream>
using namespace std;

class base
{
public:
    virtual void print()
    {
        cout << "It is the print of base" << endl;
    }

    void show()
    {
        cout << "It is the show of the base" << endl;
    }
};

class drive : public base
{
    void print()
    {
        cout << "It is the print of drive" << endl;
    }

    void show()
    {
        cout << "It is the show of the drive" << endl;
    }
};

int main()
{
    base *ptr;
    drive val;
    ptr = &val;

    ptr->print(); // print function of base call(if not use virtual keyword)

    ptr->show(); // show  function of base call(if not use virtual keyword)

    return 0;
}