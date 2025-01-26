#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node()
    {
        left = NULL;
        right = NULL;
    }
    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

// At the end it return the root/head of the tree.
// Input: 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
// o/p: Preorder-traversal: 1 2 4 5 7 3 6 -->( Root, Left, Right)
// o/p: Inorder-traversal: 4 2 7 5 1 3 6 -->(Left, Root, Right)
// o/p: Postorder-traversal: 4 7 5 2 6 3 1 -->(Left, Right, Root)
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

// 1.Preorder-traversal
void printPreorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    printPreorder(root->left);
    printPreorder(root->right);
}

// 2.Inorder-traversal
void printInorder(Node *root)
{
    if (root == NULL)
        return;
    printInorder(root->left);
    cout << root->data << " ";
    printInorder(root->right);
}

// 3.Postorder-traversal
void printPostorder(Node *root)
{
    if (root == NULL)
        return;
    printPostorder(root->left);
    printPostorder(root->right);
    cout << root->data << " ";
}

int main()
{
    Node *root = buildTree();
    cout << "Preorder-traversal:" << endl;
    printPreorder(root);
    cout << endl;

    cout << "Inorder-traversal:" << endl;
    printInorder(root);
    cout << endl;

    cout << "Postorder-traversal:" << endl;
    printPostorder(root);

    return 0;
}