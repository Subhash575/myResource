#include <iostream>
using namespace std;

void reverseArray(int *arr, int n)
{
    // My approach.
    //  int mid = n / 2;
    //  for (int i = 0; i <= mid; i++)
    //  {
    //      swap(arr[i], arr[n - 1 - i]);
    //  }

    // Sir approach.
    int s = 0;
    int e = n - 1;
    while (s < e) // always write true condition here.
    {
        swap(arr[s], arr[e]);
        s += 1;
        e -= 1;
    }
}

int main()
{
    int arr[] = {10, 20, 30, 45, 60, 80, 90};
    int n = sizeof(arr) / sizeof(int);
    reverseArray(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }

    return 0;
}