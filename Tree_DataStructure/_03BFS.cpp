// Approach 2: To print data in level order/BFS format.
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

// We went on depth and build the tree.
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
// level order traversal:-
// ex: 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
/*
o/p: for given tree.
    1
   2 3
  4 5 6
    7
*/

// In this approach we use NULL as "marker in queue" bcs when we encounter null
// Then we do two things:- 1.push another NULL   2.print new line.
// remember we deleted the previous NULL before adding another null on queue.
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
    Node *root = buildTree();
    levelOrderTraversal(root);

    return 0;
}
