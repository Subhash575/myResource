#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData()
    {
        cout << "Enter the id number: " << endl;
        cin >> id;
        count++;
    }

    void getData()
    {
        cout << "Employee id: " << id << " and this is employee no: " << count << endl;
    }

    // Static Member: Only access the static variable not other varibale
    static void getCount()
    {
        cout << "The count is: " << count << endl;
    }
};

int Employee::count; // bydefault = 0

int main()
{
    Employee Harry, Rohan, Sohan;

    Harry.setData();
    Harry.getData();
    Employee::getCount();

    Rohan.setData();
    Rohan.getData();
    Employee::getCount();

    Sohan.setData();
    Sohan.getData();
    Employee::getCount();

    return 0;
}
