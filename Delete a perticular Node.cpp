#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>

struct Node{
    int data;
    Node *n;
    Node(int x){
        data = x;
        n = nullptr;

        }

};
//Creat Node
Node* CreatNode(int arr[],int n)
{
    Node *head = new Node(arr[0]);
    Node *current = head;

    return head;
}


int main()
{
    int arr[8] = {5,3,9,46,2};
    Node *head = CreatNode(arr,5);




    return 0;
}
