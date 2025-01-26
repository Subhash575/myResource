#include <iostream>
using namespace std;

int main()
{
    char sentence[1000];
    char temp = cin.get();
    int len = 0;

    // Here we need additional check that length could not exceed original array length.
    // therefore we use mostly "cin.getline()".
    // Here we use different stopping method other than '\n'.
    while (temp != '\n')
    {
        sentence[len++] = temp;
        temp = cin.get();
    }
    sentence[len] = '\0';

    cout << sentence << endl;
    cout << "length: " << len << endl;

    return 0;
}