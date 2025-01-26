#include <iostream>
using namespace std;

void clearLastIthBits(int &n, int i)
{
    int mask = (-1 << i);
    n = (n & mask);
}

int main()
{
    int n = 15; // 1111
    int i = 2;
    clearLastIthBits(n, i);
    cout << n << endl; // 1100 bcs we take i = 2.

    return 0;
}