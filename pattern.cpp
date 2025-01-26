#include <iostream>
using namespace std;

void pattern(int n)
{
    int spc;
    int str;
    int cnt = 1;

    for (int j = 1; j <= 2 * n; j++)
    {
        if (j <= n)
        {
            spc = n - j;
            str = 2 * j - 1;
        }
        else if (j >= n + 1)
        {
            spc = j - n - 1;
            str = 2 * j - 1 - 2 * cnt;
            cnt = cnt + 2;
        }

        for (int i = 1; i <= spc + str; i++)
        {
            if (spc > 0)
            {
                cout << " ";
                spc--;
            }
            else if (str > 0)
            {
                cout << "*";
                str--;
            }
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    pattern(n);

    return 0;
}