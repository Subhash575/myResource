// Here We check Array is Sorted or not using recursion.
// If array is sorted it return true/1 and if array is not sorted it return false/0.

#include <iostream>
using namespace std;

// Method#1
// int isSorted(int arr[], int n) --> It will also we correct here bcs bool value 0/1.
bool isSorted(int arr[], int n)
{
    // Base case  //here normal or/ || , and/ && both work in program.
    if (n == 1 || n == 0)
    {
        return true;
    }

    // Recursive case
    if (arr[0] < arr[1] && isSorted(arr + 1, n - 1))
    {
        return true;
    }
    return false;
}

// Method#2 --> check this code why it is right code.
// bool isSorted(int arr[], int i, int n)
// {
//     // Base case
//     if (n == 1)
//     {
//         return true;
//     }

//     // Recursive case
//     if (arr[i] < arr[i + 1] && isSorted(arr, i + 1, n - 1))
//     {
//         return true;
//     }
//     return false;
// }

// SIR-APPROACH:-
//  bool isSorted(int arr[], int i, int n)
//  {
//      // Base case
//      if (i == n-1)
//      {
//          return true;
//      }

//     // Recursive case
//     if (arr[i] < arr[i + 1] && isSorted(arr, i + 1, n))
//     {
//         return true;
//     }
//     return false;
// }

int main()
{
    // int arr[] = {1, 2, 3, 4, 7, 5};
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(n);

    cout << isSorted(arr, n) << endl;

    // int i = 0;
    // cout << isSorted(arr, i, n) << endl;

    return 0;
}