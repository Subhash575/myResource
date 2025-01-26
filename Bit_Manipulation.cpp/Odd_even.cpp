#include <iostream>
using namespace std;

int main()
{
    // Even/Odd Number using bit manipulation.
    int x;
    cin >> x;
    if (x & 1)
    {
        cout << "Odd" << endl;
    }
    else
    {
        cout << "Even" << endl;
    }
}