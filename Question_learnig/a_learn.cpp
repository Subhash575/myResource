/*
bool compare(pair<int, int> p1, pair<int, int> p2)
{
    return (pow(p1.first, 2) + pow(p1.second, 2)) < (pow(p2.first, 2) + pow(p2.second, 2));
}

vector<pair<int, int>> sortCabs(vector<pair<int, int>> v)
{
    sort(v.begin(), v.end(), compare);
    return v;
}
*/

// Here learning from question are following :-
/*

1. pow() it is use to find power of any no here we need to add the library in the case of
iostream which is "#include <math.h>"

2. In sort method we can define over custom camparator using bool function which you can
see above here comparator name is compare.

3.In sorting to sort the vector in decending order we need to use the "greater<int>()"
in these way-->  sort(val.begin(), val.end(), greater<int>()); // 7 6 5 4 3 like these
it will sort given value in descending order.

4. Substring which you can find using these approach:--> s.substr(i, 2)
pt1. Here "i" means from which index it will start
pt2. Here "2" means length of the substrring
and using dot operator on string "s" we can find it substring of required length.

5. Remember you can use treat string like a vector.

6. vector<pair<int, int>> v = {{2, 3}, {1, 2}, {3, 4}, {2, 4}, {1, 4}};
    vector<pair<int, int>> val = sortCabs(v);
    for (auto x : val)
    {
        cout << "(" << x.first << ", " << x.second << "), ";
        // cout << val << ", "
    }

    Here you cannot directly use x to iterate over pair vector you need to use above
    approach which is "x.first" and "x.second".






*/