#include <iostream>
#include "list.h"
using namespace std;

int main()
{
    List l;
    l.push_front(1);
    l.push_front(0);
    l.push_back(3);
    l.push_back(4);
    l.insert(2, 2); // here we add "2" at second position(pos).
    l.insert(10, 0);
    // l.pop_front();
    // l.pop_back();
    l.remove(3);

    Node *head = l.begin();

    l.reverse(head); // reverse a linklist

    while (head != NULL)
    {
        cout << head->getData() << "->";
        head = head->next;
    }
    cout << endl;

    cout << "The index of 3 in list: " << l.search(3) << endl;

    return 0;
}