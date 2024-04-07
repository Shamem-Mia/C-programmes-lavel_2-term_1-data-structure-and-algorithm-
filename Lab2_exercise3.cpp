#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std ;

struct Node{

    int data;
    Node *link;
    Node(int x)
        {
        data = x;
        link = nullptr;
        }
};
//creat link
Node* CreatLink(int arr[],int n)
{
    Node *head = new Node(arr[0]);
    Node *current = head ;
        for( int i = 1 ; i < n ; i++ ){
            Node *temp = new Node(arr[i]);
            current->link = temp ;
            current = temp ;
        }
    return head ;
}
Node* deletionEnd(Node *head)
{
    Node *temp = head ;
    while(temp->link->link != NULL){
        temp = temp->link ;

    }
    temp->link = NULL;
    return head;
}


//Traversing
void trav(Node *head)
{
    while(head != NULL){
        cout<<head->data<< " ";
        head = head->link;
    }
    cout<<endl;
}
int main()
{
    int arr[7] = {6,3,9,48,78};
    Node *head = CreatLink(arr,5);
    cout<< "Befor Delating the First Node  : \n" ;
    trav(head);
    head = head->link;
    cout<< "After Delating the First Node  : \n" ;
     trav(head);
     return 0;
}
