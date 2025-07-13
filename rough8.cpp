#include <iostream>
#include <vector>
#include <chrono>
#include <algorithm>
using namespace std;

int main()
{
    // remember chrono also use for time.
    int n;
    cin >> n;
    vector<int> arr(n, 0);

    for (int i = 0; i < n; i++)
    {
        arr[i] = n - i;
    }

    auto start_time = chrono::high_resolution_clock::now();
    sort(arr.begin(), arr.end());
    auto end_time = chrono::high_resolution_clock::now();

    auto duration = chrono::duration_cast<chrono::microseconds>(end_time - start_time);

    cout << duration.count() << endl;

    return 0;
}
