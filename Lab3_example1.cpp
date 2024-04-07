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
//Deleting a perticular Node
Node* DeleteSpecificData(Node *head)
{
    int n;
    cout<<"\nwhich Data Do you want to delete ? " ;
    cin>>n;
    Node *temp = head , *prv = NULL ;
    if(temp->data == n)
    {
        return head->next;
    }
    while(temp->data != n)
    {
        prv = temp ;
        temp = temp->next ;
    }

    prv->next = temp->next;;
    delete(temp);
    return head;
}

int main()
{
    int arr[8] = {9,45,34,10,30};
    Node *head = CreatLink(arr,5);
    trav(head);
    head = DeleteSpecificData(head);
    trav(head);

    return 0;
}
