
#include <bits/stdc++.h>
using namespace std;

int sumOfDigit(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    cout << sum << endl;
}

int main()
{
    int n;
    cin >> n;
    sumOfDigit(n);

    return 0;
}