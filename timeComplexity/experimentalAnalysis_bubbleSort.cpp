#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

// Sort the element in increasing order.
void bubble_sort(vector<int> &arr, int n)
{
    // how many times iterate.
    for (int i = 1; i <= n - 1; i++)
    {
        // in this loop we can do comparison.
        for (int j = 0; j <= n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);

    for (int i = 0; i < n; i++)
    {
        arr[i] = n - i;
    }

    auto start_time = clock();
    bubble_sort(arr, n);
    auto end_time = clock();

    cout << end_time - start_time << endl;

    return 0;
}