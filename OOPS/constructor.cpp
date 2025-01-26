#include <iostream>
#include <string.h>
using namespace std;

class Product
{
private:
    int id;
    char name[100];
    int MRP;
    int sellingPrice;

public:
    // default constructor.
    Product()
    {
        cout << "you are inside the constructor " << endl;
    }
    // parameterized constructor.
    /*
    The warning you're seeing indicates that you're trying to assign a string constant
    to a non-const char* pointer. In C++, string literals are of type const char*, and
    trying to assign them to a char* without a const qualifier is considered unsafe because
     you could potentially modify the string literal, which is stored in read-only memory.
    To resolve this warning, you can declare your constructor parameter as a const char* to match the type of the string literal:
    */
    // Product(int id, char *n, int MRP, int sellingPrice)
    Product(int id, const char *n, int MRP, int sellingPrice)
    {
        this->id = id;
        this->MRP = MRP;
        this->sellingPrice = sellingPrice;
        strcpy(name, n);
    }

    // setter-> setting the value
    void setMRP(int price)
    {
        if (price > 0)
            MRP = price;
    }

    void setSellingPrice(int price)
    {
        // Additional condition (remember selling price <= MRP)
        if (price > MRP)
            sellingPrice = MRP;
        else
            sellingPrice = price;
    }

    // getter-> getting the value
    int getMRP()
    {
        return MRP;
    }

    int getSellingPrice()
    {
        return sellingPrice;
    }

    void printName()
    {
        cout << name << endl;
    }
};

int main()
{
    // Product camera;
    Product camera(1, "GoPro", 350000, 300000);
    cout << "The size of object is " << sizeof(camera) << endl;
    // camera.setMRP(100);
    cout << "MRP " << camera.getMRP() << endl;
    // camera.setSellingPrice(180);
    cout << "Selling price : " << camera.getSellingPrice() << endl;
    camera.printName();
    return 0;
}