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
Node* InsertEnd(Node *head){
    int a;
    cout<< "\n\nWhich value do you want to insert? " ;
    cin>> a ;
    Node *current =NULL,*temp = head ;
     while(temp->link != NULL)
     {
         temp = temp->link ;
     }
     current = new Node(a);
     temp->link = current ;
    return head;
}



//Traversing
void trav(Node *head)
{
    while(head != NULL){
        cout<<head->data<< " ";
        head = head->link;
    }
}
int main()
{
    int arr[7] = {6,3,9,48,78};
    Node *head = CreatLink(arr,5);
    cout<< "Befor insertion End of the Node  : \n" ;
    trav(head);

    head =  InsertEnd(head);
     cout<< "\n\nAfter insertion End of the Node : \n" ;
    trav(head);

     return 0;
}
