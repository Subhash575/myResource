#include <iostream>
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

// Input: 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
// o/p: Preorder-traversal: 1 2 4 5 7 3 6 -->( Root, Left, Right)
// preorder Iterative traversal.
void iterativeTraversal(Node *root)
{
    if (root == NULL)
        cout << "tree has no element";
    stack<Node *> st;
    Node *n = root;
    st.push(n);
    while (!st.empty())
    {
        Node *temp = st.top();
        cout << temp->data << " ";
        st.pop();
        if (temp->right)
            st.push(temp->right);
        if (temp->left)
            st.push(temp->left);
    }
}

int main()
{
    Node *root = buildTree();
    iterativeTraversal(root);
}