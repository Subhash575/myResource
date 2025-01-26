#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    // These inbuilt is linear search not binary search.
    vector<int> v = {1, 9, 3, 4, 2};
    int key;
    cin >> key;
    vector<int>::iterator it = find(v.begin(), v.end(), key);
    // cout<< it ---> it return the address of the element.
    // so finding index we can do the approach like these
    // index = address(it) - base_address(v.begin())
    if (it != v.end())
    {
        cout << "Present at index " << it - v.begin() << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
    return 0;
}

// Remember read documentation about-- search and binary search or lower and upper bound
// from cplusplus.com.