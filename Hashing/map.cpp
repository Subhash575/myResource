#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // pre-computation
    //  {map<long, long>mpp;} acc to use case we can declare it long long for power greater
    //  than 10^6 or 10^7(array size).
    // unordered_map<int, int> mpp;
    // It give time complexity of best and average is O(1)
    // But in worst case O(n)
    map<int, int> mpp;
    //  it give the time complexity of O(log N) in every case.
    for (int i = 0; i < n; i++)
    {
        // If arr element not exist it will automatically store 0.
        mpp[arr[i]]++;
    }

    // iterate in the map
    for (auto it : mpp)
    {
        cout << it.first << "->" << it.second << endl;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        // fetch
        cout << mpp[number] << endl;
    }

    return 0;
}