#include <bits/stdc++.h>
using namespace std;

class base
{
    int a;
    int b;

public:
    void set_data(int x)
    {
        a = x;
    }

    void get_data()
    {
        cout << a << endl;
    }
};

int main()
{
    // Here we create a object using pointer dynmaically.
    base *b = new base();
    b->set_data(3);
    b->get_data();

    // Here we creating dynamic integer.
    int *x = new int;
    *x = 10;
    cout << x << endl;
    cout << *x << endl;

    // create (1D)array dynmaically syntax:
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    int *arr = new int[n]; // in these way dynamically array is created.
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    //(imp: remember): we cannot use the for each-loop in that
    // method which doesn't support the begin() and end() method.
    // therefore we cannot use for each loop in above example bcs here we
    // dynamcially allocate array using new keyword.
    // therefore it show compilation error.
    // (v.imp)FOR LOOP: use in array which is not allocated using
    // new keyord, vector and container(STL):
    // bonus-pt if you not know  the data type than use auto keyword instead:
    // for example in below code you can write. (auto x: arr).
    // for (int x : arr)
    // {
    //     cout << x << " ";
    // }
}