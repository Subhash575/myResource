#include <iostream>
using namespace std;

void clearIthBit(int &n, int i)
{
    int mask = ~(1 << i);
    n = (n & mask);
}

updateIthBit(int &n, int i, int val)
{
    clearIthBit(n, i);
    int mask = (val << i);
    n = (n | mask);
}

int main()
{
    int n = 13;
    int i; // Here we take i = 1.
    cin >> i;
    int val = 1; // We want to set ith bit as 1
    updateIthBit(n, i, val);
    cout << n << endl;

    return 0;
}