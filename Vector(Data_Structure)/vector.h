// Remember here in Vector -> V is captial bcs it is class name but in STL it is small.
// Here we using template so that our header file become generic-> therefore it can valid
// for any data-type.
// after using template you need to declare class-name<data-type>object-name --->
// which is Vector<int>v; in these case use this in 'main function' where this header
// file is use.
template <typename T>
class Vector
{
    // data Member.
    int cs;
    int ms;
    T *arr;

public:
    // constructor-> current_size, max_size and creating dynamic array(vector)
    Vector(int max_size = 1)
    {
        cs = 0;
        ms = max_size;
        arr = new T[ms];
    }
    // add element at the last in the vector. If size is full than it double its size.
    // and than add the element.
    // these is not the constant function of the class bcs here we modify the array
    // which is data member of the class. therefore we make it data constant.
    void push_back(const T data)
    {
        1
            // Two cases.
            // case->1
            if (cs == ms)
        {
            // Create a new array and delete the old one, double the capacity
            //  copying the vector.
            T *oldArr = arr;
            ms = 2 * ms;
            arr = new T[ms];

            // copying existing element to a new array.
            for (int i = 0; i < cs; i++)
            {
                arr[i] = oldArr[i];
            }
            // delete old array to avoid memory leak.
            delete[] oldArr;
        }
        // case->2
        //  Add the new element at the end.
        arr[cs] = data;
        cs++;
    }
    // delete last element of the vector.
    // here we don't make it constant funcion bcs here we changing the data member
    // of the class.
    void pop_back()
    {
        if (cs > 0)
        {
            cs--;
        }
    }

    // return vector is empty or not(0 and 1 -> format)
    bool isEmpty() const
    {
        // return cs != ms; // not using bcs we check is fully empty or not
        return cs == 0;
    }

    // return last element of the vector.
    T front() const
    {
        return arr[0];
    }

    // return first element of the vector.
    T back() const
    {
        return arr[cs - 1];
    }
    // Accessing element as specific index.
    //(you can optimize this for out of range index.)(imp->remember)
    T at(int i) const
    {
        return arr[i];
    }

    // return current size of the vector.
    int size() const
    {
        return cs;
    }

    // return maximum capacity of vector.
    int capacity() const
    {
        return ms;
    }

    // Here we are doing a operator overloading therefore using [] operator it will
    // call this operator[] function and work similarily as array.
    // we call like this object[i] --> v[i].
    // here we use 'const' so that i or parameter of this not change and also we make
    // this a const function
    T operator[](const int i) const
    {
        return arr[i];
    }
};