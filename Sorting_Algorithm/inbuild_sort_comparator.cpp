#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b)
{
    // cout <<"compare "<< a << " and " << b <<endl;
    return a < b;
}

// void bubble_sort(int a[], int n)
// {
//     for (int i = 1; i <= n - 1; i++)
//     {
//         for (int j = 0; j <= n - i - 1; j++)
//         {
//             if (compare(a[j], a[j + 1]))
//             {
//                 swap(a[j], a[j + 1]);
//             }
//         }
//     }
// }

int main()
{
    int arr[] = {-3, 3, 5, 6, -2, 7};
    int n = sizeof(arr) / sizeof(int);
    // inbuild sorting algorithm. pass(s + e)  and e = s+n.
    // sort(arr, arr + n);
    // imp:it reverse the sorted fn. remember not directly reverse the arr fn
    // first sort it than reverse it.
    // reverse(arr, arr + n);

    // There is another way to reverse the sorted fn using comparator.
    // comparator fn.
    // sort(arr, arr + n, compare);

    // there is inbuilt comparator: greater<int>() same as compare use in place
    // of compare.
    sort(arr, arr + n, greater<int>());

    // bubble sort using compare fn.
    // bubble_sort(arr, n);

    for (int x : arr)
    {
        cout << x << " ";
    }
}