#include<iostream>
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

Node *creatLL(int arr[], int n){
    Node *head = new Node(arr[0]);
    Node *current = head ;
    for(int i = 1 ; i < n ; i++){
        Node *temp = new Node(arr[i]);
        current->next = temp ;
        current = temp ;
    }
    return head;
}
void traverseLL(Node *head){
    while(head != NULL){
        cout<< " " << head->data ;
        head = head->next ;
    }
}

int main(){
    int arr[4] = {4,8,6,3};
    Node *head = creatLL(arr, 4);
    traverseLL(head);

    return 0;

}
