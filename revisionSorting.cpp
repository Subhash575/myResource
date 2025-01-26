#include <iostream>
using namespace std;

// Insertion Sort revision.
// void insertSort(int *arr, int n)
// {
//     int temp;
//     for (int j = 1; j <= n - 1; j++)
//     {
//         for (int i = j; i > 0; i--)
//         {
//             temp = arr[i];
//             if (arr[i - 1] > temp)
//                 swap(arr[i - 1], arr[i]);
//         }
//     }
// }

// Selection Sort revision
void selectSort(int *arr, int n)
{
    int pos;
    int minIndex;
    for (int j = 0; j < n - 1; j++)
    {
        pos = j;
        minIndex = j + 1;
        for (int i = j + 1; i <= n - 1; i++)
        {
            if (arr[minIndex] > arr[i])
            {
                minIndex = i;
            }
        }
        if (arr[pos] > arr[minIndex])
            swap(arr[pos], arr[minIndex]);
    }
}

int main()
{
    // int arr[] = {5, 3, 2, 8, 7, 3, 2, 1};
    // int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int arr[] = {3, 2, 1, 5, 4};
    int n = sizeof(arr) / sizeof(int);
    // insertSort(arr, n);
    selectSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }

    return 0;
}