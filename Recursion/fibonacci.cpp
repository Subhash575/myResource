#include <iostream>
using namespace std;

// This code will tell at ith position/index we have which value.
int fib(int n)
{
    // base case
    if (n == 1 || n == 0)
        return n;

    // recursive case
    //  return fib(n-1) + fib(n-2);
    int f1 = fib(n - 1);
    int f2 = fib(n - 2);
    return f1 + f2;
}

int main()
{
    int n;
    cin >> n;
    cout << fib(n) << endl;

    return 0;
}