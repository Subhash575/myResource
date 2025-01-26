#include <iostream>
using namespace std;

class Student
{
    int *ptr;

public:
    // constructor
    Student(int size)
    {
        ptr = new int[size];
    }

    // destructor
    ~Student()
    {
        delete[] ptr;
    }
};

int main()
{
    Student D(7);
}