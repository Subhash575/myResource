#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    // allocate dynamic memory(in heap).
    int *arr = new int[n];

    // address print of arr which are in heap memory(which element adrs print)
    cout << arr << endl;

    for (int i = 0; i < n; i++)
    {
        arr[i] = i;
        cout << arr[i] << " ";
    }
    cout << "\n";

    // free dynamic memory.
    delete[] arr;
    // after delete adrs will be same but value can be different you can
    // not predicted.
    cout << arr << endl;

    // not write below syntax after delete it will print random value or
    // any value you cannot predict.
    // cout << arr[2];

    return 0;
}