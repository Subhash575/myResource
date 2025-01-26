#include <bits/stdc++.h>
using namespace std;

// helper function
void merge(vector<int> &arr, int s, int e)
{
    int mid = (s + e) / 2;
    int i = s;
    int j = mid + 1;

    vector<int> temp;

    while (i <= mid && j <= e)
    {
        if (arr[i] < arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }

    // copy remanining element from first array.
    while (i <= mid)
    {
        temp.push_back(arr[i++]);
    }

    while (j <= s)
    {
        temp.push_back(arr[j++]);
    }

    // copy back the element from temp to original array.
    int k = 0;
    for (int idx = s; idx <= e; idx++)
    {
        arr[idx] = temp[k++];
    }

    // return;
}

// Sorting method
void mergeSort(vector<int> &arr, int s, int e)
{ // base case
    if (s >= e)
    {
        return;
    }
    // recursive case
    int mid = (s + e) / 2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);

    return merge(arr, s, e);
}

int main()
{
    vector<int> arr = {10, 5, 2, 0, 7, 6, 4};
    // vector<int> arr{10, 5, 2, 0, 7, 6, 4};
    int s = 0;
    int e = arr.size() - 1;
    mergeSort(arr, s, e);
    for (int x : arr)
    {
        cout << x << ", ";
    }

    return 0;
}