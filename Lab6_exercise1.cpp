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
    int n = height(r);
    cout<<" The height of the tree is : "<< n <<endl;

    return 0;
}


