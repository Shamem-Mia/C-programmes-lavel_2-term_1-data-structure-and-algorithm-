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

Node* DeleteEndDLL(Node *head){

    cout<< "\n\nAfter Deleting the end node of DLL  : " ;
    if(head == NULL){
        delete head ;
        return 0;
    }
    Node *temp = head ;
    while(temp->next->next != NULL)
    {
        temp = temp->next ;
    }
     Node *frnt = temp->next;
    temp->next =  NULL ;
    frnt->bak = NULL ;
     delete frnt ;

    return head;
}

int main()
{
    int arr[8] = {9,45,34,10,30};
    Node *head = CreatLinkDLL(arr,5);
    cout<< "\n\nBefore Deleting the end node of DLL : " ;
    trav(head);
    head = DeleteEndDLL(head);
    trav(head);
    return 0;
}
