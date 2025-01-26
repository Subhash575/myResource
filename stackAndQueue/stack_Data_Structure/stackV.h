#include <vector>
using namespace std;

template <typename T>
class Stack
{
    vector<T> arr;

public:
    void push(T data)
    {
        arr.push_back();
    }

    void pop()
    {
        arr.pop_back();
    }

    T top()
    {
        int lastIndx = arr.size() - 1;
        return arr[lastIndx];
    }

    bool empty()
    {
        return arr.size() == 0;
    }
};
