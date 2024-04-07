#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;


struct Node{

int data;
Node *next;
Node *bak ;
Node(int x)
   {
    data = x;
    next = nullptr;
    bak = nullptr;
   }
   Node(int x,Node *f , Node *b)
   {
       data = x;
       next = f ;
       bak = b ;
   }
};
//Creat link
Node* CreatLinkDLL(int arr[],int n)
{
    Node *head = new Node(arr[0]);
    Node *frnt = head;
     Node *prev=NULL ;
    for(int i = 1 ; i < n ; i++)
    {
        Node *temp = new Node(arr[i] , nullptr , prev);
        frnt->next = temp ;
        prev = temp ;
        prev->bak = frnt;
        frnt = temp;
        prev = temp->next ;
        temp = temp->next ;
    }
    return head;
}
//Traversing

void trav(Node *head)
{

    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next ;
    }
    cout<<endl;
}
//Delete First Node
Node* DeleteFirstDLL(Node *head){
    cout<< "\n\nAfter deleting the first node : " ;

    Node *bak;
    if(head == NULL){
       cout<< "\n\nEmpty !!! " ;
        return 0;
    }
    Node *t = head ,*temp =head->next;
     head = temp;
     temp->bak = NULL ;
     delete t;
    return head;
}


int main()
{
    int arr[8] = {9,45,34,10,30};
    Node *head = CreatLinkDLL(arr,5);
    cout<< "Before deleting the first node : " ;
    trav(head);
    head =  DeleteFirstDLL(head);
    trav(head);
    return 0;
}
