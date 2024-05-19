#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data ;
    Node *left, *right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};

lavelOrderTraversal(Node *root){
    if(root == NULL){
        cout<< "This is mpty Node" << endl;
    }
    queue<Node*>q ;
    q.push(root);
    while(!q.empty()){
        Node *temp = q.front() ;
        q.pop();
        if(temp->left != NULL){
            q.push(temp->left);

        }
        if(temp->right != NULL){
            q.push(temp->right);
        }
        cout<< " " << temp->data ;
    }
}

int main(){
    Node* root = new Node(1);
    root -> left = new Node(2);
    root -> right = new Node(3);
    root -> left -> left = new Node(4);
    root -> left -> right = new Node(5);
    root -> right -> left = new Node(6);
    root -> right -> right = new Node(7);
    lavelOrderTraversal(root);
}
