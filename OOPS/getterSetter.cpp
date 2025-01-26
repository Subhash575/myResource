#include <iostream>
using namespace std;

class Product
{
private:
    int id;
    char name[100];
    int MRP;
    int sellingPrice;

public:
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
};

int main()
{
    Product camera;
    cout << "The size of object is " << sizeof(camera) << endl;
    camera.setMRP(100);
    cout << "MRP of product: " << camera.getMRP() << endl;
    camera.setSellingPrice(180);
    cout << "Selling price : " << camera.getSellingPrice() << endl;

    return 0;
}