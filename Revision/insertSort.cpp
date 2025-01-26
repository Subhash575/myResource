#include <iostream>
using namespace std;

void insertionSort(int *arr, int n)
{
    int temp;
    for (int j = 1; j < n; j++)
    {
        temp = arr[j];
        for (int i = j; i > 0; i--)
        {
            if (arr[i - 1] > temp)
            {
                swap(arr[i], arr[i - 1]);
            }
        }
    }
}

int main()
{
    int arr[] = {6, 5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(int);
    insertionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }

    return 0;
}