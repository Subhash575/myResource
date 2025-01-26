#include <iostream>
using namespace std;

void bubbleSort(int *arr, int n)
{
    for (int j = 0; j < n - 1; j++)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
            }
        }
    }
}

int main()
{
    int arr[] = {12, 0, -12, 34, 56};
    int n = sizeof(arr) / sizeof(n);
    bubbleSort(arr, n);
    for (int x : arr)
    {
        cout << x << ",";
    }

    return 0;
}