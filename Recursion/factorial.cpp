// Factorial program using recursion.
#include <iostream>
using namespace std;

int fact(int n)
{
    // Base condition
    if (n == 0)
    {
        return 1;
    }
    int ans = n * fact(n - 1);
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << fact(n) << endl;

    return 0;
}

// Remember: Space and time complexity of these program is O(N).
// Recursion use call stack which occupy space therefore space complexity: O(N)
// Time complexity is O(N) bcs function call it self N times.