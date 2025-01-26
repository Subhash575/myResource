#include <iostream>
using namespace std;

void numberSpell(int n)
{
    string Spell[] = {"zero", "one", " two", "three", "four", "five", "six", "seven", "eight", "nine"};
    // Base Case
    if (n == 0)
        return;

    int last_digit = n % 10;
    numberSpell(n / 10);
    cout << Spell[last_digit] << " ";
}

int main()
{
    int n;
    cin >> n;
    numberSpell(n);
}