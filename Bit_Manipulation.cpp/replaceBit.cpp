// Here we are given two num "n" and "m" an we are adding all bits of m in n from pos
// i to j in the number n .
#include <iostream>
using namespace std;

void clearBits(int &n, int i, int j)
{
    int a = (-1 << j + 1);
    int b = (1 << i) - 1;
    int mask = a | b;
    n = (n & mask);
}
void replaceBits(int &n, int i, int j, int m)
{
    clearBits(n, i, j);
    int mask = (m << i);
    n = (n | mask);
}

int main()
{
    int n = 15; // n = 1024
    int i = 1;  // i = 2
    int j = 3;  // j = 6
    int m = 2;  // m = 21  and o/p n will be 1108.(for given test case in replace bit)
    replaceBits(n, i, j, m);
    cout << n << endl;

    return 0;
}
