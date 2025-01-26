#include <iostream>
using namespace std;

// My Approach:-
int firstOccur(int arr[], int n, int key, int i)
{
    // Checking key is present on array or not.
    if (arr[i] == key)
    {
        return i;
    }

    // Base case
    if (i == n - 1)
        return -1;

    // Recursive case
    firstOccur(arr, n, key, i + 1);
}

// approach modification of sir approach:-

// int firstOcc(int arr[], int n, int key)
// {
//     int subIndex = 0;
//     if (n == 0)
//         return -1;

//     if (arr[0] == key)
//         return subIndex;

//     subIndex = firstOcc(arr + 1, n - 1, key);
//     if (subIndex != -1)
//         return subIndex + 1;
// }

// Sir Approach:-
int firstOcc(int arr[], int n, int key)
{
    if (n == 0)
        return -1;

    if (arr[0] == key)
        return 0;

    int subIndex = firstOcc(arr + 1, n - 1, key);
    if (subIndex != -1)
        return subIndex + 1;
    return -1;
}

int main()
{ // Remember this code only find the first occurence of the target/key only.
    int arr[] = {1, 3, 7, 9, 3, 11, 18};
    int n = sizeof(arr) / sizeof(int);
    int key;
    cin >> key;
    // cout << firstOccur(arr, n, key, 0);
    cout << firstOcc(arr, n, key);

    return 0;
}