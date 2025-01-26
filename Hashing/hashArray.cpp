#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Here we creating a array and setting a value.
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // precomputation
    //  let say we have given max element is 12 than we take hash size 12 + 1
    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }

    // How many number you want to check
    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;

        // fetching
        cout << hash[number] << endl;
    }

    return 0;
}