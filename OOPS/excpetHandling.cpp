// EXCEPTION HANDLING IN C++
/*
Exception handling in C++ is a mechanism to handle runtime errors, ensuring that the program can continue or exit gracefully when an error occurs. The core components of exception handling in C++ are try, catch, and throw.

Here's a breakdown of how they work:

try block: This block contains the code that might throw an exception. If an exception occurs, the rest of the code in the try block is skipped.

catch block: This block is used to handle exceptions. A catch block follows a try block and can catch exceptions thrown in the try block. Multiple catch blocks can be used to handle different types of exceptions.

throw statement: This statement is used to signal the occurrence of an exception. It can be used to throw an exception from within the try block or from any function called within the try block.
*/

#include <iostream>
using namespace std;

int main()
{

    try
    {
        int num1;
        int num2;
        cin >> num1 >> num2;

        if (num2 == 0)
        {
            throw "Divison by zero error";
        }
        else
        {
            int result = num1 / num2;
            cout << "The result is: " << result << endl;
        }
    }

    catch (const char *e)
    {
        cout << "Error: " << e << endl;
    }

    return 0;
}