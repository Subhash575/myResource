#include <iostream>
using namespace std;

int convertToBinary(int n)
{
    int ans = 0;
    int power = 1;
    while (n > 0)
    {
        ans = ans + power * (n & 1);
        n = n >> 1;
        power = power * 10;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << convertToBinary(n) << endl;

    return 0;
}