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
void FindSpecificData(Node *head)
{
    int n,cnt = 0;
    cout<<"\nThe possition for which Data Do you want to know ? " ;
    cin>>n;
    Node *temp = head   ;

    while(temp->data != n)
    {
        cnt++ ;
        temp = temp->next ;
    }


     cout<< "\nThe position of that data is : " << cnt+1;

}

int main()
{
    int arr[8] = {9,45,34,10,30};
    Node *head = CreatLink(arr,5);
    trav(head);
     FindSpecificData(head);


    return 0;
}
