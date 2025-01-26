/*
Stack Implementation Using LinkList:-
*/
// forward declaration
template <typename T>
class Stack;

template <typename T>
class Node
{
public:
    T data;
    Node<T> *next;

    Node(T d)
    {
        data = d;
    }
};

template <typename T>
class Stack
{
    Node<T> *head;

public:
    Stack()
    {
        head = NULL;
    }
    // push function
    void push(T data)
    {
        // Work in case of both the case either linklist is empty or not.(stack)
        Node<T> *n = new Node<T>(data);
        n->next = head;
        head = n;
    }

    // helper function.(use in case of top and pop)
    bool empty()
    {
        return head == NULL;
    }

    // top function.
    T top()
    {
        /* check out why it show error*/
        // if (empty)
        // {
        //     cout << "stack is empty" << endl;
        // }
        // else
        // {
        //     return head->data;
        // }

        return head->data;
    }

    // pop function.
    void pop()
    {

        if (head != NULL)
        {
            Node<T> *temp = head;
            head = head->next;
            delete temp;
        }
        /* check out why it show error*/
        // else
        // {
        //     cout << "stack is empty";
        // }
    }
};