#include <iostream>
using namespace std;

class Product
{
private: // bydefault access modifier is private.
    int id;
    char name[100];

public:
    // remember selling price <= MRP
    int mrp;
    int selling_price;
};

int main()
{
    Product camera;
    cout << "The size of object is " << sizeof(camera) << endl;
    camera.mrp = 200;
    cout << "MRP of product: " << camera.mrp << endl;
    camera.selling_price = 180;
    cout << "Selling price : " << camera.selling_price << endl;

    return 0;
}