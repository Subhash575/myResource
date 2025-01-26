#include <bits/stdc++.h>
using namespace std;

// Custom comparator to sort based on the distance from the origin
bool compare(pair<int, int> p1, pair<int, int> p2)
{
    return (pow(p1.first, 2) + pow(p1.second, 2)) < (pow(p2.first, 2) + pow(p2.second, 2));
}

vector<pair<int, int>> sortCabs(vector<pair<int, int>> v)
{
    sort(v.begin(), v.end(), compare);
    return v;
}

int main()
{
    vector<pair<int, int>> v = {{2, 3}, {1, 2}, {3, 4}, {2, 4}, {1, 4}};
    vector<pair<int, int>> val = sortCabs(v);
    for (auto x : val)
    {
        cout << "(" << x.first << ", " << x.second << "), ";
        // cout << val << ", "
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2)
{
    return (pow(p1.first, 2) + pow(p1.second, 2)) < (pow(p2.first, 2) + pow(p2.second, 2));
}

vector<pair<int, int>> sortCabs(vector<pair<int, int>> v)
{
    sort(v.begin(), v.end(), compare);
    return v;
}