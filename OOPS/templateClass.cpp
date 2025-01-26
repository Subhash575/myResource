// template class
#include <iostream>
using namespace std;

template <typename T>
class MyContainer
{
    T value;

public:
    MyContainer(T x)
    {
        value = x;
    }

    void setVal(T a)
    {
        value = a;
    }

    T getVal()
    {
        return value;
    }
};

int main()
{

    MyContainer<int> box(24);
    cout << box.getVal() << endl;

    return 0;
}
