#include <iostream>
using namespace std;

// BASIC -> APPROACH
// void countBits(int n)
// {
//     int cnt = 0;
//     while (n > 0)
//     {
//         cnt += (n & 1);
//         n = n >> 1;
//     }
//     cout << "The count is " << cnt << endl;
// }

// FASTER METHOD:-
void countBits(int n)
{
    int ans = 0;
    while (n > 0)
    {
        n = n & (n - 1);
        ans++;
    }
    cout << "The count is " << ans << endl;
}

int main()
{
    int n = 15; // binary format -> 01111. here count is 4
    countBits(n);

    return 0;
}