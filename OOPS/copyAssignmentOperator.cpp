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
    /*
    Product(Product &X)
    {
        // Deep copy inside copy constructor.
        id = X.id;
        MRP = X.MRP;
        sellingPrice = X.sellingPrice;
        name = new char[strlen(X.name) + 1];
        strcpy(name, X.name);
        // these will help in solving the problem
        // of dynamic memory
    }
    */

    // User define "copy assignment operator"
    void operator=(Product &X)
    {
        // Deep copy inside copy assignment operator
        id = X.id;
        MRP = X.MRP;
        sellingPrice = X.sellingPrice;
        name = new char[strlen(X.name) + 1];
        strcpy(name, X.name);
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
};

int main()
{
    // Product camera;
    Product camera(1, "GoProHero9", 350000, 300000);

    // Product old_camera(camera);

    Product old_camera; // constructor call

    // copy assignment operator.(if we don't define user define copy assignment operator
    // it will automatically create own copy assignment operator which is bydefault
    // present in compiler).
    old_camera = camera; // similar as: old_camera.(camera);
    old_camera.setName("GoPro8");
    old_camera.setSellingPrice(1000);

    camera.showDetails();
    old_camera.showDetails();

    // Here in copy assignment operator show same problem as "copy constructor"  bcs of
    // "shallow copy" to remove this problem we need to define our own copy assignment
    // operator in the class.

    return 0;
}