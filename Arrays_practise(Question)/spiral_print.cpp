// Spiral print (it is imp for revision).
#include <bits/stdc++.h>
using namespace std;

void print_ans(int arr[][4], int n, int m)
{
    int startRow = 0;
    int endCol = m - 1;
    int endRow = n - 1;
    int startCol = 0;

    while (startRow <= endRow and startCol <= endCol)
    {

        // Start Row
        for (int col = startCol; col <= endCol; col++)
        {
            cout << arr[startRow][col] << " ";
        }

        // End Col
        for (int row = startRow + 1; row <= endRow; row++)
        {
            cout << arr[row][endCol] << " ";
        }

        // End Row
        for (int col = endCol - 1; col >= startCol; col--)
        {
            if (startCol == endCol)
            {
                break;
            }
            cout << arr[endRow][col] << " ";
        }

        // start Col
        for (int row = endRow - 1; row >= startRow + 1; row--)
        {
            if (startRow == endRow)
            {
                break;
            }
            cout << arr[row][startCol] << " ";
        }
        startRow++;
        endRow--;
        startCol++;
        endCol--;
    }
}

int main()
{

    int arr[][4] = {{1, 2, 3, 4},
                    {12, 13, 14, 5},
                    {11, 16, 15, 6},
                    {10, 9, 8, 7}};

    int n = 4;
    int m = 4;

    print_ans(arr, n, m);

    return 0;
}