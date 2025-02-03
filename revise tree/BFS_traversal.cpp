#include <bits/stdc++.h>
using namespace std;

//Revision of BFS traversal.
class Node{
public:
    int data;
    Node*left;
    Node*right;
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *arrToTree(vector<int>arr, int& idx){
    
    //Base case:-
    if( idx >= arr.size() || arr[idx] == -1){
        idx+=1;
        return NULL;
    }

    Node *n = new Node(arr[idx]);
    idx +=1;
    n->left = arrToTree(arr, idx);
    n->right = arrToTree(arr, idx);
    return n;  
}

void BFS_Traversal(Node*head){
   
   if(head == NULL) return;
   queue<Node*>q;
   q.push(head);
   while(!q.empty()){
    if(q.front()->left != NULL) q.push(q.front()->left);
    if(q.front()->right != NULL) q.push(q.front()->right);
    cout << q.front()->data <<" ";
    q.pop();
   }
}

int main(){
    vector<int>arr = {3, 4, 5, -1, -1, 9, -1, -1, 7, 2, -1, -1, 6, -1, -1};
    int idx = 0;
    Node*head = arrToTree(arr, idx);
    BFS_Traversal(head);
    return 0;
}