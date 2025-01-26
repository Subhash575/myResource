#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    // sorting using in buit sort function.
    int arr[] = {2, 3, 8, 4, 89};
    int n = sizeof(arr) / sizeof(int);
    // sort(arr, arr + n);
    // reverse(arr, arr + n);

    // remember this reverse only reverse the given array whether it sorted or not
    // actually we use the reverse fn to reverse the sorted array.
    // For reversing the array their is function call  greater <int>() which we use as
    // comparator(below is the example)

    sort(arr, arr + n, greater<int>());
    for (int x : arr)
    {
        cout << x << ",";
    }

    return 0;
}