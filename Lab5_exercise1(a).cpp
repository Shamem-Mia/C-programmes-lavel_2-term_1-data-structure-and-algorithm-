#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;

struct Node{
int data ;
Node *left ;
Node *right ;

Node(int x){
 data = x ;
left = right =  NULL ;
}

};
// Inorder Traversal

void InOrderTrav(Node *temp){
if( temp == NULL )
{
    return;
}
InOrderTrav(temp->left);
cout<<temp->data<< "  " ;
InOrderTrav(temp->right);
}

// Preorder Traversal


void PreOrderTrav(Node *temp){
if( temp == NULL )
{
    return;
}
cout<<temp->data<< "  " ;
PreOrderTrav(temp->left);
PreOrderTrav(temp->right);
}

// Postorder Traversal


void PostOrderTrav(Node *temp){
if( temp == NULL )
{
    return;
}

PostOrderTrav(temp->left);
PostOrderTrav(temp->right);
cout<<temp->data<< "  " ;
}

int main()
{
     Node* r = new Node(50);
    r->left = new Node(17);
    r->left->left = new Node(12);
    r->left->left->left = new Node(9);
    r->left->left->right = new Node(14);
    r->left->right = new Node(13);
    r->left->right->right = new Node(19);
    r->right = new Node(72);
    r->right->left = new Node(54);
    r->right->left->right = new Node(67);
    r->right->right = new Node(70);
    cout << "In Order Traversal   : " ;
    InOrderTrav(r);
    cout<<endl;
     cout << "Pre-Order Traversal  : " ;
    PreOrderTrav(r);
    cout<<endl;
     cout << "Post-Order Traversal : " ;
    PostOrderTrav(r);
    cout<<endl;

    return 0;
}
