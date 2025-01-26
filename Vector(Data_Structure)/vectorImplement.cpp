#include <iostream>
#include "vector.h"
using namespace std;

// FOR YOUR OWN {HEADER FILE->'name.h' use for header file creation} YOU NEED TO USE THE
// "double quote"--> add this on same Directory were you want to use this But here is some
// problem which is it only valid for int data-type therefore use the 'template classes'
// to make the header file general purpose
// creating header file only class create in "name.h" file and use template for multi
// purpose.

// class Vector
// {
//     // data Member.
//     int cs;     //current size.
//     int ms;     //max size.
//     int *arr;

// public:
//     //constructor-> current_size, max_size and creating dynamic array(vector)
//     Vector(int max_size = 1)
//     {
//         cs = 0;
//         ms = max_size;
//         arr = new int[ms];
//     }
//     // add element at the last in the vector. If size is full than it double its size.
//     // and than add the element.
//     // these is not the constant function of the class bcs here we modify the array
//     // which is data member of the class. therefore we make it data constant.

//     void push_back(const int data)
//     {
//         // Two cases.
//         // case->1
//         if (cs == ms)
//         {
//             // Create a new array and delete the old one, double the capacity
//             //  copying the vector.
//             int *oldArr = arr;
//             ms = 2 * ms;
//             arr = new int[ms];

//             // copying existing element to a new array.
//             for (int i = 0; i < cs; i++)
//             {
//                 arr[i] = oldArr[i];
//             }
//             // delete old array to avoid memory leak.
//             delete[] oldArr;
//         }
//         // case->2
//         //  Add the new element at the end.
//         arr[cs] = data;
//         cs++;
//     }
//     // delete last element of the vector.
//     // here we don't make it constant funcion bcs here we changing the data member
//     // of the class.

//     void pop_back()
//     {
//         if (cs > 0)
//         {
//             cs--;
//         }
//     }

//     // return vector is empty or not(0 and 1 -> format)
//     bool isEmpty() const
//     {
//         // return cs != ms; // not using bcs we check is fully empty or not
//         return cs == 0;
//     }

//     // return first element of the vector.
//     int front() const
//     {
//         return arr[0];
//     }

//     // return last element of the vector.
//     int back() const
//     {
//         return arr[cs - 1];
//     }
//     // Accessing element as specific index.
//     //(you can optimize this for out of range index.)(imp->remember)
//     int at(int i) const
//     {
//         return arr[i];
//     }

//     // return current size of the vector.
//     int size() const
//     {
//         return cs;
//     }

//     // return maximum capacity of vector.
//     int capacity() const
//     {
//         return ms;
//     }

//     // Here we are doing a operator overloading therefore using [] operator it will
//     // call this operator[] function and work similarily as array.
//     // we call like this object[i] --> v[i].
//     // here we use 'const' so that i or parameter of this not change and also we make
//     // this a const function
//     int operator[](const int i) const
//     {
//         return arr[i];
//     }
// };

int main()
{
    // Vector v(5);

    // Because in header file we use the template therefore we need to use header file as
    // => Vector<int>v; here defining data type is very important otherwise code will
    //  not work bcs we make the header file general purpose for all datatype.
    // remember here "V" captial of vector bcs of class name but in vector STL it is small

    // Here I already created the vector of 'char' data-type using my own header file.
    Vector<char> vc;
    vc.push_back('a');
    vc.push_back('b');
    vc.push_back('c');

    for (int i = 0; i < vc.size(); i++)
    {
        cout << vc[i] << ", ";
    }
    cout << endl;

    // Here we created the vector of 'int' data-type
    Vector<int> v(5);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(15);
    v.push_back(6);
    v.pop_back();
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ", ";
    }
    cout << endl;
    cout << v.size() << endl;
    cout << v.capacity() << endl;
    cout << v.at(3) << endl;
    cout << v.isEmpty() << endl; // o/p: 0(false)
    cout << v.front() << endl;
    cout << v.back() << endl;

    return 0;
}

/* int capacity() const{
        return ms;
    }

these  is the constant function -> constant function doesn't change/modify the data member
 of the class.
*/