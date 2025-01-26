#include <iostream>
using namespace std;

//"Kadane Algorithm" is use for finding subarray max Sum only in linear time:- O(N)
void printSubarrays(int *arr, int n)
{
    int cs = 0;
    int ms = 0;

    for (int i = 0; i < n; i++)
    {
        cs = cs + arr[i];
        if (cs < 0)
            cs = 0;

        if (cs > ms)
            ms = cs;
    }
    cout << "The largest sum is: " << ms << endl;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(int);
    printSubarrays(arr, n);

    return 0;
}