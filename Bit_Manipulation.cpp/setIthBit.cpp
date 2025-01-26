#include <iostream>
using namespace std;

void setIthBit(int &n, int i)
{
    int mask = 1 << i;
    // for set in bit we use binary OR 1|0, 0|1, 1|1 has equal to 1 else 0|0 = 0.
    n = (n | mask);
}

int main()
{
    int n = 5;
    int i;
    cin >> i; // we take i = 1 bcs these position have bit 0

    setIthBit(n, i); // remember if given position of number having bit 0 only those can
    // be set and those position having bit 1 cannot be set. here n = 5 which is
    // :- 000101 only position 0 and 2 cannot we set other position we can able to set.
    cout << n;
    // for i = 1 we get new number which is 7.
    // you can also check position i = 1 and i =0 here we get same n = 5.

    return 0;
}