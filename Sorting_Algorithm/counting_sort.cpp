#include <bits/stdc++.h>
using namespace std;

void count_sort(int a[], int n)
{
    int large_element = -1;
    for (int i = 0; i < n; i++)
    {
        large_element = max(large_element, a[i]);
    }

    // creating count(dynamic array)
    vector<int> freq(large_element + 1, 0);

    // assigin frequency to count array.

    for (int i = 0; i < n; i++)
    {
        freq[a[i]]++;
    }

    // put back the elements from freq into original array.
    int j = 0;
    for (int i = 0; i <= large_element; i++)
    {

        while (freq[i] > 0)
        {
            a[j] = i;
            j++;
            freq[i]--;
        }
    }
}

int main()
{
    int arr[] = {88, 97, 10, 12, 15, 1, 5, 6, 12, 5, 8};
    int n = sizeof(arr) / sizeof(int);
    count_sort(arr, n);

    for (int x : arr)
    {
        cout << x << " ";
    }

    return 0;
}