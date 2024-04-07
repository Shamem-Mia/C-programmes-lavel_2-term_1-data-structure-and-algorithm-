#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;

 struct Node
 {

     int data ;
     Node *left ;
     Node *right ;
     Node(int x){
     data = x;
     left = NULL;
     right = NULL;
     }



 };

 void LOT(Node *root){
    int cnt = 0;
 queue<Node*> q ;
 q.push(root);
 while(!q.empty()){
    Node *temp = q.front();
    q.pop();
    if(temp->left != NULL){
        q.push(temp->left);
        cout<< " " << temp->left->data ;

    }
    if(temp->right != NULL){
        q.push(temp->right);

        //cout<<  " " << temp->right->data ;

    }
 }

 }


int main()
{
    Node *root = new Node(5);
    root->left = new Node(4);
    root->left->left = new Node(3);
    root->left->right = new Node(2);
    root->right = new Node(6);
    root->right->left = new Node(7);
    LOT(root);

    return 0;
}
