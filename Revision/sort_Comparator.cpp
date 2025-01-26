#include <iostream>
#include <algorithm>
using namespace std;

// sorting using comparator.
bool compare(int a, int b)
{
    return a < b;
}

int main()
{
    int arr[] = {3, -4, 5, 0, -2, 12, -10};
    int n = sizeof(arr) / sizeof(int);
    sort(arr, arr + n, compare);
    for (int x : arr)
    {
        cout << x << ",";
    }

    return 0;
}
