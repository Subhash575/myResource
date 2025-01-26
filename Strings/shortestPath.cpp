// String processing problem(Shortest path)

// Find Displacement:Given a long route containing N, S, E, W directions, find the shortest
//  path to reach the location.
/*
Sample Input: SNNNEWE

Sample Output: NNE (remember- ENN/NNE both are the same)
*/

#include <iostream>
using namespace std;

int main()
{
    char route[1000];
    cin.getline(route, 1000);

    int x = 0;
    int y = 0;

    // here '\0' is the last character. "Not '\n' it show inconsitence value"
    for (int i = 0; route[i] != '\0'; i++)
    {

        switch (route[i])
        {
        case 'N':
            y++;
            break;

        case 'S':
            y--;
            break;

        case 'E':
            x++;
            break;

        case 'W':
            x--;
            break;

        default:
            // cout << "invalid string" << endl;
            break;
        }
    }

    cout << "value of x and y is: " << x << ", " << y << endl;

    if (x >= 0 and y >= 0)
    {
        while (y--)
        {
            cout << "N";
        }

        while (x--)
        {
            cout << "E";
        }
    }
    else if (x < 0 and y < 0)
    {
        while (y++)
        {
            cout << "S";
        }

        while (x++)
        {
            cout << "W";
        }
    }
    else if (x >= 0 and y < 0)
    {
        while (y++)
        {
            cout << "S";
        }

        while (x--)
        {
            cout << "E";
        }
    }
    else if (x < 0 and y >= 0)
    {
        while (y--)
        {
            cout << "N";
        }

        while (x++)
        {
            cout << "W";
        }
    }

    return 0;
}