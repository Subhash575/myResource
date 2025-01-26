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

int lenOFDLL(Node *head)
{
    Node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

// Remember In case of reverse a LL always swap data.(not try to change the node)
Node *reverseDLL(Node *head)
{
    Node *temp = head;
    int len = lenOFDLL(head);
    int k = len / 2;
    int cnt = 0;
    Node *front = head;
    while (front->next != NULL)
    {
        front = front->next;
    }

    while (temp != NULL)
    {
        cnt++;
        if (cnt == k + 1)
            break;
        Node *n = new Node(0);
        n->data = temp->data;
        temp->data = front->data;
        front->data = n->data;
        temp = temp->next;
        front = front->back;
    }
    return head;
}

Node *reverseLinkDLL(Node *head)
{
    Node *temp = head;
    Node *front = head->next;
    int cnt = 0;
    int k = lenOFDLL(head);
    while (temp != NULL)
    {
        cnt++;
        temp->next = temp->back;
        temp->back = front;
        if (cnt == k)
        {
            head = temp;
            break;
        }
        temp = front;
        front = front->next;
    }
    return head;
}

main()
{
    vector<int> arr = {2, 4, 5, 6, 7};
    Node *head = convertArr2DLL(arr);
    print(head);
    cout << endl;
    // head = reverseDLL(head);
    head = reverseLinkDLL(head);
    print(head);

    return 0;
}