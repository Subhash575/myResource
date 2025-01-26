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
        left = nullptr;
        right = nullptr;
    }
};

Node *buildTree()
{
    int d;
    cin >> d;
    if (d == -1)
        return NULL;

    Node *n = new Node(d);
    n->left = buildTree();
    n->right = buildTree();
    return n;
}

// Iterative inorder Traversal
// Input: 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
// o/p: Inorder-traversal: 4 2 7 5 1 3 6 -->(Left, Root, Right)
vector<int> iterativeTraversal(Node *root)
{
    vector<int> inorder;
    if (root == NULL)
        return inorder;

    stack<Node *> st;
    Node *node = root;
    while (true)
    {
        if (node != NULL)
        {
            st.push(node);
            node = node->left;
        }
        else
        {
            if (st.empty())
                break;
            node = st.top();
            st.pop();
            inorder.push_back(node->data);
            node = node->right;
        }
    }
    return inorder;
}

int main()
{
    Node *root = buildTree();
    vector<int> arr = iterativeTraversal(root);
    for (int x : arr)
    {
        cout << x << " ";
    }

    return 0;
}