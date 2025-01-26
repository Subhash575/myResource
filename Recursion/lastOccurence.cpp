#include <iostream>
using namespace std;

int lastOcc(int arr[], int n, int key)
{

    if (n == 0)
        return -1;
    // these -1 will return to the previous recursive call.

    int subIndex = lastOcc(arr + 1, n - 1, key);
    if (subIndex == -1)
    {
        if (arr[0] == key)
            return 0;
        else
            return -1;
    }
    else
        return subIndex + 1;
}

int main()
{
    int arr[] = {1, 2, 3, 5, 3, 6};
    int n = sizeof(arr) / sizeof(int);
    int key;
    cin >> key; // take key is equal to 3.
    cout << lastOcc(arr, n, key);

    return 0;
}