// #include<bits/stdc++.h>  //(imp Pt)// this header file include all the file including
//  vector and math etc.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // initialzing of vector(method 1)
    vector<int> arr = {1, 2, 5, 7};

    // initialzing of vector(method 2)-> using "fill constructor".
    // vector<int> arr(10, 7);

    // here 10 -> denote size of vector which is equal to 10
    // and 7-> denote each elment value here which is equal to 7.

    // It tell no of element in vector(present at this moment).
    cout << arr.size() << endl;
    // It tell no of element occupying space/memory allocated in terms of no of element.
    // It will be double if you add the element which exceed it capacity/size.
    // for e.g if you add vector of size = 4 an extra element let say 5 it will
    // automatically double the array size and capacity will also double in these case
    // size = 5 and capacity is 2*4 = 8  or we can say double of original value
    // bcs intially size and capacity both is equal to 4.

    // add element at the last of vector.(using push_back you can see doubling of capacity)
    arr.push_back(6); // take time T = O(1).

    cout << arr.capacity() << endl;

    // to remove element from last.
    arr.pop_back();
    // printing vector.
    for (int num : arr)
    {
        cout << num << ", ";
    }

    return 0;
}