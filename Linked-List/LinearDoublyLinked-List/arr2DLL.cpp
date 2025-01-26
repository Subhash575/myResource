#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *back;

    Node(int data1, Node *next1, Node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }

    Node(int data1)
    {
        data = data1;
        next = NULL;
        back = NULL;
    }
};

// Converting Arr into doubly linked list.
Node *convertArr2DLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << "<->";
        temp = temp->next;
    }
}

// DELETION IN DLL:-

// case 1: Delete head of double LL.
Node *deleteHeadDLL(Node *head)
{ // If DLL is empty(edge case 1)
    if (head == NULL)
        return head;

    // If DLL is not empty but singel element present(edge case 2)
    if (head->next == NULL)
    {
        delete (head);
        return NULL;
    }

    Node *prev = head;
    head = head->next;
    // head->back = NULL;
    // or
    prev->next->back = NULL;
    prev->next = NULL;
    delete (prev);
    return head;
}

// case 2: Delete tail of DLL.
Node *deleteTailDLL(Node *head)
{
    if (head == NULL)
        return head;

    if (head->next == NULL)
    {
        delete (head);
        return NULL;
    }

    Node *prev = head;
    while (prev->next->next != NULL)
    {
        prev = prev->next;
    }
    prev->next->back = NULL;
    delete prev->next;
    prev->next = NULL;

    return head;
}

// case3: Delete element at kth position of double linked list.

// MY APPROACH:-
// Node *deleteKthDLL(Node *head, int k)
// {

//     if (head == NULL)
//         return head;

//     if (head->next == NULL)
//     {
//         if (k == 1)
//         {
//             delete head;
//             return NULL;
//         }
//         else
//         {
//             cout << "invalid" << endl;
//         }
//     }

//     if (head->next != NULL)
//     {
//         if (k == 1)
//         {
//             Node *prev = head;
//             head = head->next;
//             head->back = NULL;
//             prev->next = NULL;
//             delete prev;
//             return head;
//         }
//     }

//     Node *temp = head;
//     Node *prev = NULL;
//     int cnt = 0;
//     // It also covered out of range cases  here range of k is from 1 to N(length of DLL)
//     while (temp != NULL)
//     {
//         cnt++;
//         if (cnt == k)
//         {
//             // It will cover edge case: In which tail of linked list is delete.
//             if (temp->next == NULL)
//             {
//                 temp->back = NULL;
//                 prev->next = NULL;
//                 delete temp;
//                 break;
//             }

//             temp->next->back = prev;
//             prev->next = temp->next;
//             temp->next = NULL;
//             temp->back = NULL;
//             delete temp;
//             break;
//         }
//         prev = temp;
//         temp = temp->next;
//     }
//     return head;
// }

// Sir Approach:-
Node *deleteKthDLL(Node *head, int k)
{
    if (head == NULL)
        return NULL;

    Node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        if (cnt == k)
            break;
        temp = temp->next;
    }

    Node *prev = temp->back;
    Node *front = temp->next;
    if (front == NULL && prev == NULL)
    {
        delete temp;
        return NULL;
    }
    else if (prev == NULL)
    {
        return deleteHeadDLL(head);
    }
    else if (front == NULL)
    {
        return deleteTailDLL(head);
    }

    prev->next = front;
    front->back = prev;
    temp->next = NULL;
    temp->back = NULL;
    delete temp;
    return head;
}

// case 4 :Delete Node in DLL.
void deleteNodeDLL(Node *temp)
{
    // IMP: Pt to remember that if you delete the head of the DLL it will loose all it
    //  connection therefore it is difficult to done. Generally temp is not the head of
    //  DLL.
    Node *prev = temp->back;
    Node *front = temp->next;

    if (front == NULL)
    {
        temp->back = NULL;
        prev->next = NULL;
        delete temp;
        return; // taaki after execution code doesn't execute below line of code.
    }

    prev->next = front;
    front->back = prev;
    temp->next = NULL;
    temp->back = NULL;
    delete temp;
}

// INSERTION IN DLL
// case1: Insertion before the head of DLL.
Node *insertBeforeHeadDLL(Node *head, int data1)
{
    Node *temp = new Node(data1, head, nullptr);
    head->back = temp;
    head = temp;
    return head;
}

// case 2: Insertion before the tail of DLL.

// My appraoch:-
// Node *insertBeforeTailDLL(Node *head, int data1)
// {
//     if (head == NULL)
//         return new Node(data1);

//     if (head->next == NULL)
//     {
//         Node *x = new Node(data1, head, nullptr);
//         head->back = x;
//         head = x;
//         return head;
//     }

//     Node *temp = head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     Node *prev = temp->back;
//     Node *n = new Node(data1, temp, temp->back);
//     prev->next = n;
//     temp->back = n;
//     return head;
// }

// Sir approach:-
Node *insertBeforeTailDLL(Node *head, int data1)
{
    if (head->next == NULL)
    {
        return insertBeforeHeadDLL(head, data1);
    }

    Node *tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    Node *prev = tail->back;
    Node *n = new Node(data1, tail, prev);
    prev->next = n;
    tail->back = n;
    return head;
}

// case 3: Insert before the kth node of DLL.
Node *insertBeforeKthDLL(Node *head, int element, int k)
{
    // In case when DLL is empty.
    if (head == NULL)
    {
        if (k == 1)
            return new Node(element);
        else
            return head;
    }

    // In case when it have single or multi element in DLL.
    if (k == 1)
    {
        Node *x = new Node(element, head, NULL);
        head->back = x;
        head = x;
        return head;
    }

    Node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        if (cnt == k)
        {
            Node *prev = temp->back;
            Node *n = new Node(element, temp, prev);
            prev->next = n;
            temp->back = n;
            break;
        }

        temp = temp->next;
    }
    return head;
}

void insertBeforeNodeDLL(Node *temp, int data1)
{
    Node *prev = temp->back;
    Node *n = new Node(data1, temp, prev);
    prev->next = n;
    temp->back = n;
}

main()
{
    vector<int> arr = {2, 3, 4, 5, 8, 9, 10, 15, 78};
    Node *head = convertArr2DLL(arr);
    print(head);
    cout << endl;

    // Deletion In DLL
    cout << "Deletion IN DLL" << endl;
    // case1: Deletion of head in DLL.
    head = deleteHeadDLL(head);
    print(head);
    cout << endl;

    // case2: Delete tail of DLL.
    head = deleteTailDLL(head);
    print(head);
    cout << endl;

    // case3: Delete element at kth position of double linked list.
    head = deleteKthDLL(head, 4);
    print(head);
    cout << endl;

    // case4: Delete Node of given DLL.
    // Remember in these case head is not pass and it diffcult to execute following case
    // of head.
    // deleteNodeDLL(head->next);
    deleteNodeDLL(head->next->next);
    print(head);
    cout << endl;

    // INSERTION IN DLL
    cout << "Insertion IN DLL" << endl;
    // case 1: Insertion before the head of DLL.
    head = insertBeforeHeadDLL(head, 37);
    print(head);
    cout << endl;

    // case 2: Insertion before the tail of DLL.
    head = insertBeforeTailDLL(head, 67);
    print(head);
    cout << endl;

    // case 3: Insert before kth element of DLL.
    head = insertBeforeKthDLL(head, 45, 7);
    print(head);
    cout << endl;

    // case 4: Insert before a given Node of DLL.
    // IMP: remember given node cannot be head.
    insertBeforeNodeDLL(head->next->next->next, 69);
    print(head);

    return 0;
}