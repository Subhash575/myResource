// In this problem we want to sort number acc to total marks.
#include <bits/stdc++.h>
using namespace std;

int calcToMarks(vector<int> marks)
{
    return marks[0] + marks[1] + marks[2];
}

bool compare(pair<string, vector<int>> m1, pair<string, vector<int>> m2)
{
    vector<int> x = m1.second;
    vector<int> y = m2.second;
    return calcToMarks(x) > calcToMarks(y);
}

int main()
{

    vector<pair<string, vector<int>>> student_marks{
        {"Suraj", {23, 56, 90}},
        {"Ramesh", {33, 76, 80}},
        {"Sonam", {93, 96, 90}},
        {"Vishal", {73, 66, 70}},

    };

    // If you use sort it will arrange data in the form of lexiographical order only
    // If you want to sort acc to total marks you need  define your own customize
    // comparator(true/false return (remember)).
    sort(student_marks.begin(), student_marks.end(), compare);

    // After sorting these using the customize comparator you can see it will print the
    // sorted complex vector.
    for (auto s : student_marks)
    {
        cout << s.first << " " << calcToMarks(s.second) << endl;
    }

    return 0;
}