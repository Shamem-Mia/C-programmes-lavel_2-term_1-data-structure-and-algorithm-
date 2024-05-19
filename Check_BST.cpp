#include<iostream>
#include<bits/stdc++.h>
#include<limits>
using namespace std;

struct Node{
    int data ;
    Node *left, *right ;
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

bool isBST(Node *root, Node *mini, Node *maxi){
    if(root == NULL) return true;
    if(mini != NULL && root->data <= mini->data){
        return false;
    }
    if(maxi != NULL && root->data >= maxi->data) {
        return false;
    }
    bool minValue = isBST(root->left, mini,root);
    bool maxValue = isBST(root->right, root,maxi);
    return minValue and maxValue;
}


int main(){
    Node* root = new Node(1);
    root -> left = new Node(2);
    root -> right = new Node(3);

    if(isBST(root,NULL,NULL)){
        cout<< "BST" ;

    }
    else
    {

        cout<< "NOT BST";
    }

}
