#include<bits/stdc++.h>
using namespace std;
struct Node
{
int data;
Node *left;
Node *right;
Node(int val)
{
data = val;
left = NULL ;
right = NULL;
}
};
// Inorder Traversal Function
void InOrderTraversal(Node *temp)
{
if (temp==NULL)
{
return;
}
InOrderTraversal(temp->left);
cout<<temp->data<<" ";
InOrderTraversal(temp->right);
}
void PreOrderTrav(Node *temp){
if( temp == NULL )
{
    return;
}
cout<<temp->data<< "  " ;
PreOrderTrav(temp->left);
PreOrderTrav(temp->right);
}

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
// Tree construction
Node* root = new Node(5);
root -> left = new Node(2);
root -> right = new Node(1);
root -> left -> right = new Node(7);
root -> right -> left = new Node(3);
root -> right -> right = new Node(9);
root -> right -> left->left = new Node(4);
root -> right -> right->left = new Node(7);
root -> right -> right-> right = new Node(11);
cout<<"Inorder Traversal:"<<endl;
InOrderTraversal(root);
cout<<endl;
cout<<"Preorder Traversal:"<<endl;
 PreOrderTrav(root);
 cout<<endl;
cout<<"Postorder Traversal:"<<endl;
 PostOrderTrav(root);
}
