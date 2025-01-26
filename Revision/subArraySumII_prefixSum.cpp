#include <iostream>
using namespace std;

// Print the sum of each subarray and find out the largest sum.
// SubArrSum(Brute force approach). T = O(N^3)
void printSubarrays(int *arr, int n)
{
    int sum;
    int largestSum = 0;
    int prefix[n];
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            // here we use tirnary operator so that i = 0 subarray also include.
            sum = i > 0 ? prefix[j] - prefix[i - 1] : prefix[j];
            // for greater than 0 use prefix[j] - prefix[i - 1]
            // for less than 0 use prefix[j];
            cout << sum << endl;
        }
        largestSum = max(largestSum, sum);
    }

    cout << "The largest sum is: " << largestSum << endl;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(int);
    printSubarrays(arr, n);

    return 0;
}