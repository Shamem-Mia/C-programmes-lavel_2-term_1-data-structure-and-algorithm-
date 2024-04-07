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
Node* Length(Node *head){

    Node *temp = head ;
    int c = 1;
     while(temp->link != NULL)
     {
         temp = temp->link ;
         c++;
     }
      cout<< "\nThe length of the Node is : " <<c;

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
    Length(head);

     return 0;
}
