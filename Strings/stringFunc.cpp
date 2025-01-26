#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[100] = "Subhash";
    char b[100];

    // string fn:- strlen()
    cout << strlen(a) << endl;

    // string fn:- strcpy
    strcpy(b, a);
    cout << b << endl;

    // string fn:- strcmp()
    char c[100] = "Sanja";
    cout << strcmp(b, c) << endl;

    // string fn:- strcat()
    char name[100] = "Suraj";
    char lastName[100] = "_Singh";
    char newName[100];
    strcpy(newName, strcat(name, lastName));
    cout << newName << endl;

    return 0;
}