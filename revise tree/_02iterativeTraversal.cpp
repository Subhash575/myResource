#include <bits/stdc++.h>
using namespace std;

// iterative inorder traversal using stack (revise)
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
        cout << "Tree is not valid";
    stack<Node *> st;
    Node *temp = head;
    while (true)
    {
        if (temp != NULL)
        {
            st.push(temp);
            temp = temp->left;
        }
        else
        {
            if (st.empty())
                break;

            temp = st.top();
            st.pop();
            cout << temp->data;
            temp = temp->right;
        }
    }
}

int main()
{
    // vector<int> arr = {1, 2, 4, -1, -1, 5, 7, -1, -1, -1, 3, -1, 6, -1, -1};
    vector<int> arr = {3, 4, -1, -1, 5, 6, -1, -1, 7, -1, -1};
    int idx = 0;
    Node *head = arrToTree(arr, idx);
    iterativeInOrderTraversal(head);

    return 0;
}