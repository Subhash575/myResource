#include <bits/stdc++.h>
using namespace std;
// Iterative preOrderTraversal here we use Queue and stack for solving this problem.
// Visit tree folder to see better approach were we use the stack in such a way
// so that we can able to print iterative preOrder Traversal.
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

void iterativePreOrderTraversal(Node *head)
{
    if (head == NULL)
        cout << "Not valid tree";
    queue<Node *> q;
    stack<Node *> st;
    Node *temp = head;
    q.push(temp);
    while (!q.empty() || !st.empty())
    {
        if (q.front()->left)
            q.push(q.front()->left);
        if (q.front()->right)
            st.push(q.front()->right);
        cout << q.front()->data;
        q.pop();

        if (!st.empty() && q.empty())
        {
            q.push(st.top());
            st.pop();
        }
    }
}

// Input: 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
// o/p: Preorder-traversal: 1 2 4 5 7 3 6 -->( Root, Left, Right)
// preorder Iterative traversal.

int main()
{
    // vector<int> arr = {1, 2, 4, -1, -1, 5, 7, -1, -1, -1, 3, -1, 6, -1, -1};
    vector<int> arr = {3, 4, -1, -1, 5, 6, -1, -1, 7, -1, -1};
    int idx = 0;
    Node *head = arrToTree(arr, idx);
    iterativePreOrderTraversal(head);

    return 0;
}