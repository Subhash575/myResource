#include <iostream>
#include <queue>
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

// Here we learn level order build.
// ex: 1 2 3 4 5 -1 6 -1 -1 7 -1 -1 -1 -1 -1
// remember(level order build is same as level order traversal)
// This is my code.

// Node *levelOrderBuild()
// {
//     int d;
//     cin >> d;
//     if (d == -1)
//         return NULL;
//     Node *n = new Node(d);
//     queue<Node *> q;
//     q.push(n);
//     while (!q.empty())
//     {
//         Node *temp = q.front();
//         q.pop();
//         // for left child
//         cin >> d;
//         if (d != -1)
//         {
//             Node *x = new Node(d);
//             temp->left = x;
//             q.push(temp->left);
//         }
//         else
//             temp->left = NULL;

//         // for right child
//         cin >> d;
//         if (d != -1)
//         {
//             Node *y = new Node(d);
//             temp->right = y;
//             q.push(temp->right);
//         }
//         else
//             temp->right = NULL;
//     }
//     return n;
// }

// This is my code with modification.
Node *levelOrderBuild()
{
    int d;
    cin >> d;
    if (d == -1)
        return NULL;

    Node *n = new Node(d); // Create the root node
    queue<Node *> q;
    q.push(n);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        // For the left child
        cin >> d;
        if (d != -1)
        {
            temp->left = new Node(d);
            q.push(temp->left);
        }

        // For the right child
        cin >> d;
        if (d != -1)
        {
            temp->right = new Node(d);
            q.push(temp->right);
        }
    }

    return n; // Return the root node
}

// level Order Traversal.
void levelOrderTraversal(Node *root)
{
    if (root == NULL)
        cout << "Not a valid Tree";
    else
    {
        queue<Node *> q;
        q.push(root);
        q.push(NULL);
        while (!q.empty())
        {
            Node *temp = q.front();
            q.pop();
            if (q.empty())
                break;
            if (temp != NULL)
            {
                if (temp->left != NULL)
                    q.push(temp->left);
                if (temp->right != NULL)
                    q.push(temp->right);
                cout << temp->data << " ";
            }
            else
            {
                q.push(NULL);
                cout << endl;
            }
        }
    }
}

int main()
{
    Node *root = levelOrderBuild();
    levelOrderTraversal(root);
}
