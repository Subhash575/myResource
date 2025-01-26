#include <iostream>
using namespace std;

int main()
{
    // "cin.getline" function is use to read the entire sentence given by the user.
    // It automatically convert "\n" into "\0"(Null character)
    // but in case of cin.get() we need to store "\0" at the end of the character.
    // Here we use different stopping parameter by providing additonal parameter
    // as character.
    // syntax:- cin.getline(sentence, 1000, '.');
    char sentence[1000];
    // cin.getline(sentence, 1000);
    cin.getline(sentence, 1000, '.'); // Here we use additional paramter as '.'
    // bydefault these additional parameter is '\n'.
    cout << sentence << endl;

    return 0;
}