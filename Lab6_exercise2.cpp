#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
int data;
Node *left;
Node *right;
Node(int x){
data = x;
left = right = NULL;
}
};
int height(Node *root){

    if(root == NULL){
        return 0;
    }
    return max(height(root->left) , height(root->right)) + 1 ;


}
bool IsBalanced(Node *root){
    if(root == NULL) return true;
    if(IsBalanced(root->left)) return true;
    if(IsBalanced(root->right)) return true;
    int lh = height(root->left);
    int rh = height(root->right);
    if(abs(lh-rh) <= 1){
        return true;
    }
    else{
        return 0;
    }
    }


int main()
{

    Node *r = new Node(50);
    r->left = new Node(17);
    r->left->left = new Node(12);
    r->left->right = new Node(23);
    r->left->left->left = new Node(9);
    r->left->left->right = new Node(14);
    r->left->right->right = new Node(19);
    r->right = new Node(72);
    r->right->right = new Node(76);
    r->right->left = new Node(54);
    r->right->left->right = new Node(67);
    if(IsBalanced(r)){
        cout<< "The tree is balanced" <<endl;
    }
    else{
        cout<< "The tree is not balanced"<<endl;
    }


    return 0;
}

