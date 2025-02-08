// preorder, inorder and postorder all traversal in one code:-
// Revise Imp for interview.
#include <bits/stdc++.h>
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

void allTraversalDFS(Node *head, vector<int> &preOrder, vector<int> &inOrder,
                     vector<int> &postOrder)
{
    if (head == nullptr)
        cout << "empty tree";
    Node *temp = head;
    stack<pair<Node *, int>> st;
    st.push({temp, 1});
    while (!st.empty())
    {
        if (st.top().second == 1)
        {
            preOrder.push_back(temp->data);
            st.pop();
            st.push({temp, 2});
            temp = temp->left;
            while (temp)
            {
                st.push({temp, 1});
                preOrder.push_back(temp->data);
                st.pop();
                st.push({temp, 2});
                temp = temp->left;
            }
        }
        if (st.top().second == 2)
        {
            temp = st.top().first;
            inOrder.push_back(temp->data);
            st.pop();
            st.push({temp, 3});
            temp = temp->right;
            if (temp)
                st.push({temp, 1});
        }
        if (st.top().second == 3)
        {
            temp = st.top().first;
            postOrder.push_back(temp->data);
            st.pop();
        }
    }
}

int main()
{
    vector<int> arr = {3, 4, -1, -1, 5, 6, -1, -1, 7, -1, -1};
    int idx = 0;
    Node *head = arrToTree(arr, idx);
    vector<int> preOrder;
    vector<int> inOrder;
    vector<int> postOrder;
    allTraversalDFS(head, preOrder, inOrder, postOrder);

    cout << "preOrder Traversal:- ";
    for (int x : preOrder)
    {
        cout << x << ", ";
    }
    cout << endl;

    cout << "inOrder Traversal:- ";
    for (int y : inOrder)
    {
        cout << y << ", ";
    }
    cout << endl;

    cout << "postOrder Traversal:- ";
    for (int z : postOrder)
    {
        cout << z << ", ";
    }
    //(imp): T.C = O(3N) bcs we visit on each node 3 times bcs of preOrder, inOrder and
    // postOrder traversal
    // S.C = O(4N) bcs of stack, vector like preOrder, inOrder and postOrder
    // approx == T.C = O(N) and S.C = O(N).
    return 0;
}