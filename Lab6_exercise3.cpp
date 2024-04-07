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


 bool IsBst(Node *root,Node *min1=NULL,Node *max1=NULL){

     if(root == NULL){
        return true;
     }
     if(min1 != NULL && root->data <= min1->data){
        return false;
     }
     if(max1 != NULL && root->data >= max1->data){
        return false;
     }
    bool lv = IsBst(root->left,min1,root);
    bool rv = IsBst(root->right,root,max1);
     return lv and rv ;
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


    if(IsBst(r,NULL,NULL)){
        cout<< "The tree is BST " <<endl;
    }
    else{
        cout<< "The tree is not BST"<<endl;
    }


    return 0;
}
