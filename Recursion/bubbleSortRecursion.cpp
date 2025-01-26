// bubble sort.
#include <iostream>
using namespace std;

// Normal bubble sort code.
// void bubbleSort(int *arr, int n)
// {
//     int count = 0;
//     for (int j = 0; j < n - 1; j++)
//     {
//         for (int i = 0; i < n - 1; i++)
//         {
//             if (arr[i] > arr[i + 1])
//                 swap(arr[i], arr[i + 1]);
//             count++;
//         }
//         if (count == 0)
//             break;
//     }
// }

// Here we convert outer loop of bubble sort into "Base" and "Recursive" code.
// In these way we can convert the bubble sort(iterative code) into recursive code.
void bubbleSortRec(int *arr, int n)
{
    // Base case
    if (n == 1)
        return;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);
    }
    // Recursive code.
    bubbleSortRec(arr, n - 1);
}

// Here we convert all bubble sort code into compelety recursive code.
void bubbleSortRec_2(int *arr, int n, int j)
{
    // OUTER LOOP:-
    //  base case.
    if (n == 1 || n == 0)
    {
        return;
    }

    // Recursive case.
    if (j == n - 1)
    { // reduce the problem size and reset j to 0.
        bubbleSortRec_2(arr, n - 1, 0);
        return;
    }

    // Below code work as inner loop and Above code work as outer loop
    // INNER LOOP:-
    if (arr[j] > arr[j + 1])
        swap(arr[j], arr[j + 1]);

    bubbleSortRec_2(arr, n, j + 1);
}

int main()
{
    int arr[] = {2, 1, 6, 5, 3, 4};
    int n = sizeof(arr) / sizeof(int);
    // bubbleSort(arr, n);
    // bubbleSortRec(arr, n);
    bubbleSortRec_2(arr, n, 0);

    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << ", ";
    }

    return 0;
}