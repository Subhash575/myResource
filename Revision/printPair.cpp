#include <iostream>
using namespace std;

void printAllPairs(int *arr, int n)
{

    for (int j = 0; j < n - 1; j++)
    {
        for (int i = j + 1; i < n; i++)
        {
            cout << "(" << arr[j] << "," << arr[i] << "),";
        }
        cout << "\n";
    }
    // By little modification in above code you can get all possible pair
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(int);
    printAllPairs(arr, n);
    // Here pair like (10, 10),(20, 20) not include and (10, 20)/(20, 10) pairs consider
    // same therefore not include this pair twice.

    return 0;
}