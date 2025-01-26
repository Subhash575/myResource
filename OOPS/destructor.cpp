#include <iostream>
#include <string.h>
using namespace std;

class Product
{
private:
    int id;
    char *name; // here we creating pointer so that it will point to dynamic memory.
    int MRP;
    int sellingPrice;

public:
    // default constructor.
    Product()
    {
        cout << "you are inside the constructor " << endl;
    }

    Product(int id, char *n, int MRP, int sellingPrice)
    {
        this->id = id;
        this->MRP = MRP;
        this->sellingPrice = sellingPrice;
        name = new char[strlen(n) + 1]; // remember here 1 for NULL character.
        // here in above code we allocating space for name pointer so that it can easily
        // access the value during strcpy(name, n);
        strcpy(name, n);
    }

    // Comment out the these user define "copy constructor" to understand the "shallow copy"
    // Below is user define "copy constructor"
    Product(Product &X)
    {
        id = X.id;
        MRP = X.MRP;
        sellingPrice = X.sellingPrice;
        name = new char[strlen(X.name) + 1];
        strcpy(name, X.name);
        // these will help in solving the problem
        // of dynamic memory
    }

    void setMRP(int price)
    {
        if (price > 0)
            MRP = price;
    }

    void setSellingPrice(int price)
    {

        if (price > MRP)
            sellingPrice = MRP;
        else
            sellingPrice = price;
    }

    int getMRP()
    {
        return MRP;
    }

    int getSellingPrice()
    {
        return sellingPrice;
    }

    void showDetails()
    {
        cout << "id: " << id << endl;
        cout << "name: " << name << endl;
        cout << "MRP: " << MRP << endl;
        cout << "sellingPrice: " << sellingPrice << endl;
        cout << "------" << endl;
    }

    // setter for the name
    void setName(char *name)
    {
        // this->name = n;
        strcpy(this->name, name);
    }
    // user defined destructor will only destroy dynamically allocated memory.
    ~Product()
    {
        cout << "deleting " << name << endl;
        // Here we free the dynamically allocate array.
        if (name != NULL)
        {
            delete[] name;
            name = NULL;
        }
    }
};

int main()
{
    // Product camera;
    Product camera(1, "GoProHero9", 350000, 300000);

    Product old_camera(camera);
    old_camera.setName("GoPro8");
    old_camera.setSellingPrice(1000);

    camera.showDetails();
    old_camera.showDetails();

    return 0;
}

/*
What is a destructor?

Destructor is an instance member function that is invoked automatically whenever an object is going to be destroyed. Meaning, a destructor is the last function that is going to be called before an object is destroyed.

A destructor is also a special member function like a constructor. Destructor destroys the class objects created by the constructor.
Destructor has the same name as their class name preceded by a tilde (~) symbol.
It is not possible to define more than one destructor.
The destructor is only one way to destroy the object created by the constructor. Hence destructor can-not be overloaded.
Destructor neither requires any argument nor returns any value.
It is automatically called when an object goes out of scope.
Destructor release memory space occupied by the objects created by the constructor.
In destructor, objects are destroyed in the reverse of an object creation.
The thing is to be noted here if the object is created by using new or the constructor uses new to allocate memory that resides in the heap memory or the free store, the
(IMP)destructor should use "delete" to free the memory.
*/