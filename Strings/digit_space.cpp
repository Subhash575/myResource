#include <iostream>
using namespace std;

int main()
{

    char ch;
    // Here we learning cin.get() function which take character as input from the user
    // It take 1 character at a time.
    ch = cin.get();

    int alpha = 0;
    int space = 0;
    int digit = 0;

    while (ch != '\n')
    {

        if (ch >= '0' and ch <= '9')
        {
            digit++;
        }
        else if (ch >= 'a' and ch <= 'z' or ch >= 'A' and ch <= 'Z')
        {
            alpha++;
        }
        else if (ch == ' ' or ch == '\t')
        {
            space++;
        }

        ch = cin.get();
    }
    cout << endl;
    cout << "Total alphabet: " << alpha << endl;
    cout << "Total space: " << space << endl;
    cout << "Total digit: " << digit << endl;

    return 0;
}