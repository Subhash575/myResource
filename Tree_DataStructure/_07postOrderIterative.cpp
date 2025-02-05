#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *arrToTree(vector<int> arr, int &idx)
{

    // Base case:-
    if (idx >= arr.size() || arr[idx] == -1)
    {
        idx += 1;
        return NULL;
    }

    Node *n = new Node(arr[idx]);
    idx += 1;
    n->left = arrToTree(arr, idx);
    n->right = arrToTree(arr, idx);
    return n;
}

void iterativeInOrderTraversal(Node *head)
{
    if (head == NULL)
    {
        cout << "Tree in empty";
    }

    stack<Node *> s1;
    stack<Node *> s2;
    Node *temp = head;
    s1.push(temp);

    while (!s1.empty())
    {
        if (!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }

        if (!s2.empty())
        {
            // instead of stack top we can maintain node temp for left and right value.
            if (s2.top()->left)
                s1.push(s2.top()->left);
            if (s2.top()->right)
                s1.push(s2.top()->right);
        }
    }
    while (!s2.empty())
    {
        cout << s2.top()->data << " ";
        s2.pop();
    }
}

int main()
{
    vector<int> arr = {1, 2, 4, -1, -1, 5, 7, -1, -1, -1, 3, -1, 6, -1, -1};
    //  postOrderiterative:- 4 7 5 2 6 3 1
    // vector<int> arr = {3, 4, -1, -1, 5, 6, -1, -1, 7, -1, -1};
    // postOrderiterative:- 4 6 7 5 3
    int idx = 0;
    Node *head = arrToTree(arr, idx);
    iterativeInOrderTraversal(head);
    // T.C = O(N) and S.C = O(2N)
    return 0;
}