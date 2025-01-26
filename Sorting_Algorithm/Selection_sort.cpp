#include <bits/stdc++.h>
using namespace std;

// My code(revision)
void selectSort(int *a, int n)
{
    int pos;
    int minIndex;
    for (int j = 0; j < n - 1; j++)
    {
        pos = j;
        minIndex = j + 1;
        for (int i = j + 1; i <= n - 1; i++)
        {
            if (a[minIndex] > a[i])
            {
                minIndex = i;
            }
        }
        if (a[pos] > a[minIndex]) // these case imp [3, 2, 1, 5, 4] dry run check(note).
            swap(a[pos], a[minIndex]);
    }
}

// Sir approach.
void selection_sort(int a[], int n)
{

    for (int pos = 0; pos <= n - 2; pos++)
    {
        int current = pos;
        int min_position = pos;
        // find out the element.
        for (int j = pos; j < n; j++)
        {
            if (a[j] < a[min_position])
            {
                min_position = j;
            }
        }
        // swap outside the loop
        swap(a[min_position], a[current]);
    }
}

int main()
{
    // int a[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    // int a[] = {-2, 3, 4, -1, 5, 3};
    int a[] = {3, 2, 1, 5, 4};
    int n = sizeof(a) / sizeof(int);
    // selection_sort(a, n);
    selectSort(a, n);

    for (int x : a)
    {
        cout << x << ", ";
    }

    return 0;
}