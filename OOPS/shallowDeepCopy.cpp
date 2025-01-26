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
    // Here we see when we print the camera , old_camera details it will print same
    // value as "old_camera" in "camera" in case of name bcs of dynamic memory/heap
    // memory but other variable will be easily change without any problem this type
    //  of problem is arises due to use of "copy constructor" which was executed by
    //  compiler which we called shallow copy.
    // To remove these problem we need a Deep copy which will solve by user defined
    //  "copy constructor" in the class which create a deep copy and solve the problem
    // of dynamic memory.

    return 0;
}