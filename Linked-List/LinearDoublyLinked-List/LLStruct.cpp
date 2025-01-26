#include <bits/stdc++.h>
using namespace std;

struct Node
{
public:
    int data;
    Node *next;

    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

int main()
{
    vector<int> arr = {1, 2, 4, 5, 6, 7, 8};
    // method 1
    // Node x = Node(arr[0], nullptr);  --> remember Node x is object you cannot directly
    // print it either you print "x.data" which give element and another thing is it
    // give "address" when you print "x.next"

    // OR
    // Node x(arr[0], nullptr)/Node x = Node(arr[0], nullptr);
    // Node *y = &x;
    // cout << y;   ---> it will print address of y.

    // method 2(easy way)
    Node *y = new Node(arr[0], nullptr);
    cout << y->data;

    /* In method 2 : y.data give error bcs it is a pointer as well as object therefore
    we use "->"{arrow operator} for accessing data or next.
      y->data / y-> next;
    */

    return 0;
}
