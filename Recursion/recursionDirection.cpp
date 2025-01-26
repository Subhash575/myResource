#include <iostream>
using namespace std;

/* MY APPROACH
// Printing number in increasing order.
int printNumInc(int N, int x)
{

    // Base case
    if (x == N)
    {
        return x;
    }

    // Recursive case
    x = x + 1;
    cout << x << endl;
    printNumInc(N, x);
}

// Printing number in decreasing order.
int printNumDec(int N, int y)
{
    cout << y << endl;
    // Base case
    if (y == 1)
        return y;

    // Recursive case
    y = y - 1;
    printNumDec(N, y);
}

int main()
{
    int N;
    cin >> N;
    int x = 0;
    int y = N;
    printNumInc(N, x);
    // printNumDec(N, y);

    return 0;
}
*/

// SIR APPROACH:-
void dec(int n)
{
    // Base case
    if (n == 0)
        return; // it will return to it previous stack(for better understanding)

    cout << n << ",";
    // Recursive case
    dec(n - 1);
}

void inc(int n)
{

    if (n == 0)
        return;

    inc(n - 1);
    cout << n << ",";
}

int main()
{
    int n;
    cin >> n;
    dec(n);
    cout << endl;
    inc(n);

    return 0;
}

// if you want the sub problem will solve first than write function call first after that
// sub problem code. Below is the code to understand this. Also this code is in inc
// function you can see above code for better understanding
/*
   inc(n - 1);
   cout << n << ",";
*/