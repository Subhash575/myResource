#include <iostream>
#include <vector>
using namespace std;

//Revision of build a tree and DFS traversal.
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

void preOrderTraversal(Node *head){

    if(head == NULL){
        return;
    }

    cout << head->data;
    preOrderTraversal(head->left);
    preOrderTraversal(head->right);
    return;
}

//By changing the order of cout in above code we can create posorder or inorder
//traversal also.


int main(){
    vector<int>arr = {3, 4, -1, -1, 5, 6, -1, -1, 7, -1, -1};
    int idx = 0;
    Node *head = arrToTree(arr , idx);
    preOrderTraversal(head);


    return 0;
}