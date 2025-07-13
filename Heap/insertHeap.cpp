#include <iostream>
#include <vector>
using namespace std;

// This is the implementation of minheap
class Heap
{
    vector<int> v;
    void heapify(int i)
    {

        int lf = 2 * i;
        int rt = 2 * i + 1;

        if (lf >= v.size() || rt >= v.size())
            return;

        // change comparison of below for max heap
        if (v[lf] < v[rt])
        {
            if (v[lf] < v[i])
            {

                swap(v[lf], v[i]);
                heapify(lf);
            }
        }
        else
        {
            if (v[rt] < v[i])
            {
                swap(v[rt], v[i]);
                heapify(rt);
            }
        }
        return;
    }

public:
    // In the costruct we send the additional parameter which say it is minh for maxh
    // according to that it call the function
    // ex: string type = "minh" or string type = "maxh"
    // according to that it call minh for maxh push or pop function.
    Heap(int default_size = 10)
    {
        v.reserve(default_size + 1); // +1 bcs 0 index we not use
        v.push_back(-1);
    }

    // Push function of heap
    void push(int data)
    {
        v.push_back(data);
        // parent can be find by idx/2:- property of CBT

        int idx = v.size() - 1; // idx of push element
        int parent = idx / 2;   // parent idx is find by idx/2
        // change comparsion of v[parent] > v[idx] ===> v[parent] < v[idx] for maxheap
        while (idx > 1 && v[parent] > v[idx])
        {
            swap(v[idx], v[parent]);
            idx = parent;
            parent = idx / 2;
        }
    }

    // top function of the heap.
    int top()
    {
        return v[1];
    }

    // pop function in heap.
    void pop()
    {

        swap(v[1], v[v.size() - 1]);
        v.pop_back();
        heapify(1);
    }

    bool empty()
    {
        return v.size() == 1;
    }

    // This is our custom function implementation
    void print()
    {
        for (int i = 1; i < v.size(); i++)
        {
            cout << v[i] << ", ";
        }
    }
};

int main()
{
    Heap minh;
    // minh.push(4);
    // minh.push(6);
    // minh.push(2);
    // minh.push(10);
    // minh.print();
    // cout << endl;
    // cout << minh.top() << endl;
    minh.push(10);
    minh.push(20);
    minh.push(30);
    minh.push(25);
    minh.push(70);
    minh.push(40);
    minh.push(50);
    minh.print();
    cout << endl;
    minh.pop();
    minh.print();
    cout << endl;
    cout << minh.empty();
    return 0;
}