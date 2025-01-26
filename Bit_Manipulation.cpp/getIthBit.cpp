#include <iostream>
using namespace std;

int getIthBit(int n, int i)
{
    int mask = 1 << i;
    return (n & mask) > 0 ? 1 : 0;
}

int main()
{
    int n = 5; // n = 5 --> 000101 like that.
    int i;
    cin >> i; // Take i = 2 for better understanding.

    // if getIthBit value is 1 which means this position have 1 bit in ith position of
    // number = 5 else it will have 0 bit in ith position.
    cout << getIthBit(n, i) << endl;

    return 0;
}

// In above we take i =2 where we get ith position bit which is 1.
// In above case if we take i = 1 where we  get 0 bit.
// In above case if we take i = 0 where we get 1 bit.
// All cases answer acc to n = 5 which is : 000101.