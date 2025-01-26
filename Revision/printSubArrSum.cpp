#include <iostream>
using namespace std;

// Print the sum of each subarray and find out the largest sum.
// SubArrSum(Brute force approach). T = O(N^3)
void printSubarrays(int *arr, int n)
{
    int sum;
    int largestSum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            cout << sum << endl;
            // if (largestSum < sum)
            //     largestSum = sum;
            // OR
            largestSum = max(largestSum, sum);
        }
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