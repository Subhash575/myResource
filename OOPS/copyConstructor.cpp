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

    Product(int id, const char *n, int MRP, int sellingPrice)
    {
        this->id = id;
        this->MRP = MRP;
        this->sellingPrice = sellingPrice;
        strcpy(name, n);
    }

    Product(Product &X)
    {
        id = X.id;
        MRP = X.MRP;
        sellingPrice = X.sellingPrice;
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
};

int main()
{
    // Product camera;
    Product camera(1, "GoPro", 350000, 300000);
    camera.showDetails();

    // bydefault copy constructor(is called when you call the copy constructor without
    // using copy constructor syntax in class)
    Product webCam(camera); // One way to create copy constructor.
    webCam.showDetails();

    Product handyCam = camera; // Another way to create copy constructor.
    handyCam.showDetails();

    return 0;
}