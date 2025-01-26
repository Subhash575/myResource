#include <iostream>
using namespace std;

int main()
{
    // char numbers[][10] = {{'o', 'n', 'e'}, {'t', 'w', 'o'},------}
    // these approach is time consuming therefore we less use these approach.

    char numbers[][10] = {
        "one",
        "two",
        "three",
        "forty",
        "eight",
        "hundred"};

    for (int i = 0; i < 6; i++)
    {
        // remeber here '6' is row.
        cout << numbers[i] << endl;
        // numbers[i] is address here it will print entire char array but
        // in case of int array it will only print address bcs cout treat
        // char array differently.
    }

    return 0;
};
