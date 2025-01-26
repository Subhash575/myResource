#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Here vector inside vector and--> inside vector can be of different size.
    // You can see in below program.

    vector<vector<int>> arr = {
        {1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 0},
        {11, 23, 45}};
    // update:-
    arr[0][0] += 9;

    // printing 2d vector.
    for (int i = 0; i < arr.size(); i++)
    {
        for (int num : arr[i])
        {
            cout << num << ", ";
        }
        cout << endl;
    }
    return 0;
}
