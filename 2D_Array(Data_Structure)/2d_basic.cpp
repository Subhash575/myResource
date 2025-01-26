// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

// pass by reference(2d array).
void printArray(int arr[][100], int n, int m)
{
    // it is imp to pass a column in 2d array row you can may pass or not.
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j];
        }
        cout << "\n";
    }
}

int main()
{

    // constraint
    int arr[1000][100];

    // input how many row , column
    int n, m;
    cin >> n >> m;

    // input value of each row and column
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    // output(print matrix)
    printArray(arr, n, m);

    return 0;
}