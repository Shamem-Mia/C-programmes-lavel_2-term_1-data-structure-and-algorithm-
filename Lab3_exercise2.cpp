#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;


struct Node{

int data;
Node *next;
Node(int x)
   {
    data = x;
    next = nullptr;
   }
};
//Creat link
Node* CreatLink(int arr[],int n)
{

    Node *head = new Node(arr[0]);
    Node *current = head;
    for(int i = 1 ; i < 5 ; i++)
    {
        Node *temp = new Node(arr[i]);
        current->next = temp ;
        current = temp ;
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
}
//Insertion a perticular Node
Node* InsertKthP(Node *head)
{
    int n,cnt =1,a;
     cout<<"\nEnter the Value : " ;
    cin>>a;
    cout<<"\nEnter the position : " ;
    cin>>n;
    Node *temp = head, *in = NULL ,*fr = NULL ;
    in = new Node(a);
    while(cnt != n)
    {
        cnt++ ;
        temp = temp->next ;
    }
    fr = temp->next ;
    temp->next = in ;
    in->next =fr ;
     return head;
}

int main()
{
    int arr[8] = {9,45,34,10,30};
    Node *head = CreatLink(arr,5);
    trav(head);
    head = InsertKthP(head);
    trav(head);

    return 0;
}
