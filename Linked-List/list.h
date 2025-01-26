#include <iostream>
using namespace std;

// Forward declaring(It is important in case of friend class)
class List;

class Node
{
    int data;

public:
    Node *next;
    Node(int d) : data(d), next(NULL) {}

    ~Node()
    {
        if (next != NULL)
        {
            delete next;
        }
        cout << "deleting data: " << data << endl;
    }

    // getter
    int getData()
    {
        return data;
    }

    friend class List; // friend class declare so that we can use private data of Node class.
};

class List
{
    Node *head;
    Node *tail;

public:
    List() : head(NULL), tail(NULL) {}

    // This fn will return head
    Node *begin()
    {
        return head;
    }

    void push_front(int data)
    {
        if (head == NULL)
        {
            Node *n = new Node(data);
            // Node->next = NULL;  // This is wrong because node is class not an object.
            // remember in case of empty list head and tail point to new node.
            head = n;
            tail = n;
        }
        else
        {
            // remember in case of non-empty list only head is need to be change.
            Node *n = new Node(data);
            n->next = head;
            head = n;
        }
    }

    void push_back(int data)
    {
        if (head == NULL)
        {
            Node *n = new Node(data);
            // Node->next = NULL;  // This is wrong because node is class not an object.
            // remember in case of empty list head and tail point to new node.
            head = n;
            tail = n;
        }
        else
        {
            Node *n = new Node(data);
            tail->next = n;
            tail = n;
        }
    }

    void insert(int data, int pos)
    {
        if (pos == 0)
        {
            push_front(data);
            return;
        }
        // otherwise
        Node *temp = head;
        for (int jump = 1; jump <= pos - 1; jump++)
        {
            temp = temp->next;
        }

        Node *n = new Node(data);
        n->next = temp->next;
        temp->next = n;
    }

    // searching in linkedlist
    int search(int key)
    {
        Node *temp = head;
        int idx = 0; // Here we maintaining index
        while (temp != NULL)
        {
            if (temp->data == key)
            {
                return idx;
            }
            idx++;
            temp = temp->next;
        }
        return -1;
    }

    // recursive search
    int recursiveSearch(int key)
    {
        // after revising recursion self try.
    }

    void pop_front()
    {
        Node *temp = head;
        temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    pop_back()
    {

        if (head != NULL)
        {
            Node *temp = head;
            while (temp->next != tail)
            {
                temp = temp->next;
            }
            tail = temp;
            temp = tail->next;
            tail->next = NULL;
            delete temp;
        }
    }

    void remove(int pos)
    {
        Node *temp = head;
        Node *n = head;
        for (int jump = 1; jump < pos - 1; jump++)
        {
            temp = temp->next;
        }
        n = temp->next;
        temp->next = n->next;
        n->next = NULL;
        delete n;
    }

       void reverse(Node *&head)
    {
        Node *prev = NULL;
        Node *current = head;
        Node *temp = NULL;

        while (current != NULL)
        {
            temp = current->next; // Save the next node
            current->next = prev; // Reverse the link
            prev = current;       // Move prev one step ahead
            current = temp;       // Move current one step ahead
        }

        head = prev; // Update the head pointer
    }

    // In case of deletion of linklist we create a distructor.
    /*In case of destructor here recursive call is occur:- In such way that because of delete keyword
    here Node destructor is call and finally linkedlist is deleted
    here we learnt recursive destructive call.
    */
    ~List()
    {
        if (head != NULL)
        {
            delete head;
            head = NULL;
        }
    }
};