#include <bits/stdc++.h>
using namespace std;

// You can use vector property in string.
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 7};
    cout << arr; // Here it print the address of 0 index element.
    cout << endl;
    // compiler treat "char array" as a "string". but not integer array or any other
    // type of array.

    char Name[] = {'a', 'b', 'c', 'd'};
    // method 1: For printing an string(char array).
    // cout << Name;
    // method 2: using array property.
    for (int i = 0; i < 4; i++)
        cout << Name[i];
    cout << endl;

    // Remember when we declare the size of char array here last space is
    //  reserve for '\0' there in these example we only able to take 6 char
    //  from the user.
    char ch[7];
    cin >> ch;
    arr[2] = '\0'; // It will print only 0 and 1 index character and stop at 2 index.
    cout << ch;
    // remember this compiler print any number of char but in real above comment statement
    // is right.
}