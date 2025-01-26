#include <bits/stdc++.h>
using namespace std;

// Here we created the (2D)dynamic array in  function
int **create2DArray(int rows, int cols)
{
    // creating 2d dynamic array.
    int **arr = new int *[rows];
    // allocating cols to each rows
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }
    // assigning value to this 2d(dynamic array).
    int value = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = value;
            value++;
        }
    }
    return arr;
}

int main()
{

    int rows, cols;
    cin >> rows >> cols; // it will first take row than col
    int **arr = create2DArray(rows, cols);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}