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

void print(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << "<->";
        temp = temp->next;
    }
}

bool isPalindrome(Node *head)
{

    if (head->next == NULL)
    {
        return true;
    }
    Node *temp = head;
    Node *prev = NULL;
    Node *front = head->next;
    while (front != NULL)
    {
        temp->next = prev;
        prev = temp;
        temp = front;
        front = front->next;
    }
    temp->next = prev;
    prev = temp;

    temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        if (temp->data != prev->data)
        {
            cnt++;
            break;
        }

        temp = temp->next;
        prev = prev->next;
    }
    if (cnt == 0)
        return true;
    else
        return false;
}

int main()
{
    vector<int> arr = {1, 1, 2, 1};
    Node *head = convertArr2LL(arr);
    cout << isPalindrome(head);

    return 0;
}

class Solution
{
public:
    int recursion(Node *&temp)
    {
        if (temp == NULL)
        {
            return 1;
        }
        temp = temp->next;

        int carry = recursion(temp);
        int sum;
        if (temp != NULL)
        {
            sum = temp->data + carry;
            temp->data = sum % 10;
        }

        carry = sum / 10;
        if (carry == 0)
        {
            return carry;
        }
        return carry;
    }

    Node *addOne(Node *head)
    {
        int sum = 0;
        int carry;
        if (head->next == NULL)
        {
            sum = head->data + 1;
            head->data = sum % 10;
            carry = sum / 10;
            if (carry == 0)
            {
                return head;
            }
            else
            {
                Node *upHead = new Node(sum / 10);
                upHead->next = head;
                return upHead;
            }
        }

        carry = recursion(head);
        if (carry != 0)
        {
            Node *newHead = new Node(carry);
            newHead->next = head;
            return newHead;
        }
        return head;
    }
};