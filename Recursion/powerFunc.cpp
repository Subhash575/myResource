// Write a function to find power of a number, both number and power are given as input.

#include <iostream>
using namespace std;

// Sir approach.
int power(int a, int n)
{

    // Base case.
    if (n == 0)
        return 1;

    // recursive case.
    return a * power(a, n - 1);
}

// Optimize approach.
int fastPower(int a, int n)
{

    // Base case
    if (n == 0)
        return 1;

    int subPower = fastPower(a, n / 2);
    int subPowerSq = subPower * subPower;
    if (n & 1)
        return a * subPowerSq;
    else
        return subPowerSq;
}

// My approach.
int printPower(int a, int n)
{

    // Base case
    if (n == 1)
        return a;

    // Recursive case
    int ans = printPower(a, n - 1);
    ans = ans * a;
    return ans;
}

int main()
{
    int a, n;
    cin >> a >> n;
    // cout << printPower(a, n) << endl;
    cout << power(a, n) << endl;
    cout << fastPower(a, n) << endl;
}