#include <iostream>
using namespace std;

void selectSort(int *arr, int n)
{

    int idx;
    int cmp;
    for (int j = 0; j < n - 1; j++)
    {
        idx = j + 1;
        cmp = arr[idx];
        for (int i = j + 1; i < n; i++)
        {
            if (cmp > arr[i])
            {
                cmp = arr[i];
                idx = i;
            }
        }
        if (arr[j] > arr[idx])
        {
            swap(arr[idx], arr[j]);
        }
    }
}

int main()
{
    int arr[] = {5, -4, 3, -2, 1, 0, 9, 10};
    int n = sizeof(arr) / sizeof(int);
    selectSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }

    return 0;
}