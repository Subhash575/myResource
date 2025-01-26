// Approach 1: To print data in BFS/level order format.
#include <iostream>
#include <vector>
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
// level order traversal using "vector<vector<int>>" and "queue".
vector<vector<int>> levelOrderTraversal(Node *root)
{
    if (root == NULL)
        return {};
    vector<vector<int>> ans;
    // remeber here we use the node* so that we can refer it childern. which will not
    // possible if we use int here.
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        vector<int> level;
        int size = q.size();
        for (int i = 0; i < size; i++)
        {
            Node *temp = q.front();
            q.pop();
            if (temp->left != NULL)
                q.push(temp->left);
            if (temp->right != NULL)
                q.push(temp->right);
            level.push_back(temp->data);
        }
        ans.push_back(level);
    }
    return ans;
}

main()
{
    Node *root = buildTree();
    vector<vector<int>> arr = levelOrderTraversal(root);
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
