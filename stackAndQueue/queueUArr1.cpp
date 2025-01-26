// Better approach:-
#include <iostream>
using namespace std;

class Queue
{
    int *arr;
    int start;
    int end;
    int maxSize;
    int curSize;

public:
    Queue()
    {
        // Imp: Always ask size by interviewer.
        // Here we have taken by default size 10;
        maxSize = 10;
        arr = new int[maxSize];
        curSize = 0;
        start = -1;
        end = -1;
    }

    Queue(int Size)
    {

        maxSize = Size;
        arr = new int[Size];
        curSize = 0;
        start = -1;
        end = -1;
    }

    void push(int x)
    {
        if (curSize == maxSize)
        {
            cout << "Queue is overflow" << endl;
            return;
        }

        if (curSize == 0)
        {
            start = 0;
            end = 0;
        }
        else
        {
            // This type of thing create a circular type queue and maintain the out of
            //  index cases.
            end = (end + 1) % maxSize;
        }
        arr[end] = x;
        curSize += 1;
    }

    int pop()
    {
        if (curSize == 0)
        {
            cout << "Queue is underflow" << endl;
            return -1;
        }
        // In case of pop always keep the element
        int element = arr[start];
        if (curSize == 1)
        {
            start = -1;
            end = -1;
        }
        else
        {
            start = (start + 1) % maxSize;
        }
        curSize -= 1;
        return element;
    }

    int top()
    {
        // Imp-->In Queue: start denote the top element  bcs of FIFO principle.
        if (curSize == 0)
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[start];
    }

    int size()
    {
        return curSize;
    }

    void print()
    {
        if (curSize != 0)
        {
            for (int i = 0; i < curSize; i++)
            {
                cout << arr[i] << " ";
            }
        }
    }
};

int main()
{
    Queue q(4);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(7);
    // q.push(34);
    cout << "element in queue is: " << endl;
    q.print();
    cout << endl;
    cout << "Deleted element is: " << q.pop() << endl;
    cout << "Queue Top element is: " << q.top() << endl;
    cout << "Size of queue is: " << q.size() << endl;

    return 0;
}