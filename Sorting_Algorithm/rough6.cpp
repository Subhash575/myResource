#include <iostream>
using namespace std;

int main()
{

    int *x = new int;
    *x = 10;
    cout << x << endl;
    cout << *x << endl;

    return 0;
}