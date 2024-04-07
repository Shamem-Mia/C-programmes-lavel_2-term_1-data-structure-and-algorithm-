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

int Nsum(Node *root){
    int sum = 0;
    if(root==NULL){
        return 0;
    }


    if(root->left != NULL){
        sum += root->left->data ;

    }
   sum += Nsum(root->left);
   sum += Nsum(root->right);

    return sum;
    }


int main()
{

    Node *r = new Node(50);
    r->left = new Node(17);
    r->right = new Node(72);
    r->left->left = new Node(12);
    r->left->right = new Node(23);
    r->right->left = new Node(54);
    r->right->right = new Node(76);
    r->right->left->right = new Node(67);
    r->left->left->left = new Node(9);
    r->left->left->right = new Node(14);
    r->left->right->right = new Node(19);
    int Lsum = Nsum(r);
    cout<< "Sum of the left child : " << Lsum;

    return 0;
}
