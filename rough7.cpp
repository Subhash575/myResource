#include <bits/stdc++.h>
using namespace std;

// MERGE SORT CODE
// helper method
// void merge(vector<int> &arr, int s, int e)
// {
//     int i = s;
//     int mid = (s + e) / 2;
//     int j = mid + 1;

//     vector<int> temp;

//     while (i <= mid && j <= e)
//     {
//         if (arr[i] < arr[j])
//         {
//             temp.push_back(arr[i]);
//             i++;
//         }
//         else
//         {
//             temp.push_back(arr[j]);
//             j++;
//         }
//     }

//     while (i <= mid)
//     {
//         temp.push_back(arr[i++]);
//     }

//     while (j <= e)
//     {
//         temp.push_back(arr[j++]);
//     }

//     int k = 0;
//     for (int idx = s; idx <= e; idx++)
//     {
//         arr[idx] = temp[k++];
//     }

//     return;
// }

// merge sort method.
// void mergeSort(vector<int> &arr, int s, int e)
// {

//     // Base case
//     if (s >= e)
//     {
//         return;
//     }

//     int mid = (s + e) / 2;
//     // Recursive code
//     mergeSort(arr, s, mid);
//     mergeSort(arr, mid + 1, e);
//     return merge(arr, s, e);
// }

// Quick Sort:-

// helper method.
int parition(vector<int> &arr, int s, int e)
{
    int pivot = arr[e];
    int i = s - 1;

    for (int j = s; j < e; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[e]);

    return i + 1;
}

// quick sort method.
void quickSort(vector<int> &arr, int s, int e)
{

    if (s >= e)
        return;

    int p = parition(arr, s, e);
    quickSort(arr, s, p - 1);
    quickSort(arr, p + 1, e);
}

int main()
{
    vector<int> arr = {3, -1, -12, 0, 9, 4, 1};
    int s = 0;
    int e = arr.size() - 1;
    // mergeSort(arr, s, e);
    quickSort(arr, s, e);
    for (int x : arr)
    {
        cout << x << ", ";
    }

    return 0;
}