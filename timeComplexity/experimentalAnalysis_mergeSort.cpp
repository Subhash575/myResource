#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>
using namespace std;

int main()
{
    // Remember here we call the merge sort.(sort()-> method)
    int n;
    cin >> n;
    vector<int> arr(n, 0);

    for (int i = 0; i < n; i++)
    {
        arr[i] = n - i;
    }

    auto start_time = clock();
    sort(arr.begin(), arr.end()); // It uses merge sort(for sorting)
    auto end_time = clock();

    cout << end_time - start_time << endl;

    return 0;
}