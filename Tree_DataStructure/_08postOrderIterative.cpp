#include <bits/stdc++.h>
using namespace std;

// Here we find the postOrderIterative traversal using one stack
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

// Here we maintain two pointer "curr" and "temp" on tree to iterate
// curr is use for left iterate and temp is use for go to right when curr encounter
// null and temp is also use for backtrack from tree.
void itpostOrderIterative(Node *head)
{
    if (head == NULL)
        cout << "Tree is empty";
    stack<Node *> st;
    Node *temp;
    Node *curr = head;
    st.push(curr);
    curr = curr->left;
    while (!st.empty() || curr != NULL)
    {
        if (curr != NULL)
        {
            st.push(curr);
            curr = curr->left;
        }
        else
        {
            temp = st.top()->right;
            if (temp == NULL)
            {
                temp = st.top();
                st.pop();
                cout << temp->data;
                while (!st.empty() && st.top()->right == temp)
                {
                    temp = st.top();
                    st.pop();
                    cout << temp->data;
                }
            }
            else
            {
                curr = temp;
            }
        }
    }
}

int main()
{
    // vector<int> arr = {1, 2, 4, -1, -1, 5, 7, -1, -1, -1, 3, -1, 6, -1, -1};
    //  postOrderiterative:- 4 7 5 2 6 3 1
    vector<int> arr = {3, 4, -1, -1, 5, 6, -1, -1, 7, -1, -1};
    // postOrderiterative:- 4 6 7 5 3
    int idx = 0;
    Node *head = arrToTree(arr, idx);
    itpostOrderIterative(head);
    // T.C = O(2N)  and S.C = O(N)
    return 0;
}