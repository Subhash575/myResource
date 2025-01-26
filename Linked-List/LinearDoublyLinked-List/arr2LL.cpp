#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

Node *convertArr2LL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    return head;
}

int lengthOfLL(Node *head)
{
    int cnt = 0;
    Node *temp = head;
    while (temp)
    {
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

// Search an element in Linked list
int checkIfPresent(Node *head, int val)
{
    Node *temp = head;
    while (temp)
    {
        if (temp->data == val)
            return 1;
        temp = temp->next;
    }

    return 0;
}

// This function is nothing but traversal in LL.
void print(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
}
// DELETION IN LL:-
// case 1: Delete head of LL:-
Node *deleteHeadLL(Node *head)
{
    Node *temp = head;
    head = head->next;
    delete (temp);

    return head;
}

// case 2: Delete tail of LL:-
Node *deleteTailLL(Node *head)
{
    // In deletion of LL "we need to stop before the last element(logic)" but in
    //  scenario of {empty or single element linked list} above logic doesn't work
    //  therefore we return NULL at those cases.
    Node *temp = head;

    if (head == NULL || head->next == NULL)
        return NULL;

    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }

    delete (temp->next);
    temp->next = NULL;
    return head;
}

// case 3: Deletion kth(position) element of the LL:-
Node *deleteKth(Node *head, int k)
{
    // test cases: when LL is empty.
    if (head == NULL)
        return head;

    // test cases: if first element is deleted when k = 1
    if (k == 1)
    {
        Node *temp = head;
        head = head->next;
        delete (temp);
        return head;
    }
    // test cases: when k is any element other than above two cases which include
    // cases like kth element is "not present" or delete tail of LL or any other
    // cases beside from these two.
    int cnt = 0;
    Node *prev = NULL;
    Node *temp = head;

    while (temp != NULL)
    {
        cnt++;
        if (cnt == k)
        {
            prev->next = prev->next->next;
            delete (temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

// cases 4: Delete value of LL
//  These case is similar as cases3:"delete kth element".
Node *deleteValLL(Node *head, int val)
{
    if (head == NULL)
        return head;

    if (head->data == val)
    {
        Node *temp = head;
        head = head->next;
        delete (temp);
        return head;
    }

    Node *prev = NULL;
    Node *temp = head;
    while (temp != NULL)
    {

        if (temp->data == val)
        {
            prev->next = prev->next->next;
            delete (temp);
            break;
        }

        prev = temp;
        temp = temp->next;
    }
    return head;
}

// INSERTION:-
// case1: Insertion at head of LL:
Node *insertHead(Node *head, int data)
{
    // MY APPROACH
    // // If list list is not empty
    // Node *n = new Node(data);
    // n->next = head;
    // head = n;
    // return head;

    // Sir APPROACH
    Node *temp = new Node(data, head);
    return temp; // return new Node(data, head);
}

Node *insertAtTail(Node *head, int data)
{
    // In case of LL is empty.
    if (head == NULL)
        return new Node(data);

    Node *temp = head;
    Node *n = new Node(data);
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    return head;
}

Node *insertKth(Node *head, int data, int k)
{
    if (head == NULL)
    {
        if (k == 1)
            return new Node(data);
        else
            return head;
    }

    if (k == 1)
        return new Node(data, head);
    // or
    // Node *n = new Node(data, head);
    // return n;

    int cnt = 0;
    Node *temp = head;
    // IMP: It also deal with out of range edge case of k. k belong from 1 <= k <= N + 1
    // here N is length of LL.
    while (temp != NULL)
    {
        cnt++;
        if (cnt == k - 1)
        {
            // Node *x = new Node(data);
            // x->next = temp->next;
            // or
            Node *x = new Node(data, temp->next);
            temp->next = x;
            break;
        }
        temp = temp->next;
    }

    return head;
}

Node *insertBeforeVal(Node *head, int element, int val)
{
    // When LL is empty.
    if (head == NULL)
        return head;

    // when insertion before head
    if (head->data == val)
        return new Node(element, head);

    // Below code cover other cases.
    Node *temp = head;
    // Here we not go to NULL vaue and we stop before that.
    // Also Here we go to second last element at worst case
    // It also deal with out of range which meand here is no val is present on LL.
    while (temp->next != NULL)
    {

        if (temp->next->data == val)
        {

            Node *x = new Node(element, temp->next);
            temp->next = x;
            break;
        }
        temp = temp->next;
    }

    return head;
}

int main()
{
    vector<int> arr = {5, 6, 2, 1, 57, 67, 36, 9};
    Node *head = convertArr2LL(arr);
    cout << head->data << endl;
    // Traversing a linked list:-
    Node *temp = head;
    cout << "Traversing a linked list: ";
    while (temp)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }

    cout << endl;

    cout << "Length of LL: " << lengthOfLL(head) << endl;

    cout << "Searching in LL:" << checkIfPresent(head, 3) << endl;

    // DELETION IN LL:-

    // Deletion of Head in LL:-
    cout << "Deletion in LL" << endl;
    head = deleteHeadLL(head);
    print(head); // function
    cout << endl;

    // Deletion of tail in LL:-
    head = deleteTailLL(head);
    print(head);
    cout << endl;

    // Deletion of kth element in LL:-
    head = deleteKth(head, 8);
    print(head);
    cout << endl;

    // Deletion of particular value in LL:-
    head = deleteValLL(head, 1);
    print(head);
    cout << endl;

    // INSERTION IN LL:-
    cout << "INSERTION IN LL" << endl;
    // case 1: Insertion at head of LL.
    head = insertHead(head, 45);
    // or another approach direct shortcut of insertion
    // at head:- head = new node(100, head);
    print(head);
    cout << endl;

    // case 2: Insertion at tail of LL.
    head = insertAtTail(head, 597);
    print(head);
    cout << endl;

    // case 3: Insertion at kth position.
    head = insertKth(head, 69, 5);
    print(head);
    cout << endl;

    // case 4: Insert element before the value x.
    head = insertBeforeVal(head, 111, 69);
    print(head);

    return 0;
}