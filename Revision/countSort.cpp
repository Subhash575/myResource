#include <iostream>
#include <vector>
using namespace std;

void countSort(int arr[], int n)
{
    int large_element = -1;

    for (int i = 0; i < n; i++)
    {
        large_element = max(large_element, arr[i]);
    }

    // creating count/frequency array.
    // creating vector using fill constructor
    vector<int> freq(large_element + 1, 0);

    // assigin count to count array;
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++; // freq[arr[i]] = freq[arr[i]] + 1;
    }

    // putting back value in original array.
    int j = 0;
    // remember here i goes up to large_element taak.
    for (int i = 0; i <= large_element; i++)
    {

        while (freq[i] > 0)
        {
            arr[j] = i;
            freq[i]--;
            j++;
        }
    }
}

int main()
{
    int arr[] = {1, 1, 3, 4, 2, 3, 9, 7};
    int n = sizeof(arr) / sizeof(int);
    countSort(arr, n);
    for (int x : arr)
    {
        cout << x << ",";
    }

    return 0;
}