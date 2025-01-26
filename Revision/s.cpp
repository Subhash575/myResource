#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // char arr[] = {'S', 'u', 'b', 'h', 'a', 's', 'h', '\0'};
    // char a[] = "Subhash";
    // char b[100];
    // cin >> b;
    // cout << b << endl;
    // int n = sizeof(a) / sizeof(char); // remember this approach include null character.
    // cout << n << endl;
    // cout << strlen(a) << endl; // Only tell string length
    // cout << sizeof(a) << endl; // tell string length + 1 (which is null character).

    char name = cin.get();
    int len = 1;
    while (name != '\n')
    {
        len++;
        cout << name;
        name = cin.get();
    }
    cout << endl;
    cout << len; // it also include null character

    return 0;
}