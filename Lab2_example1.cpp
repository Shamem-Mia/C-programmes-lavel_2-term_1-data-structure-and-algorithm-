#include<iostream>
#include<stdlib.h>
#include<stdlib.h>
using namespace std;

struct Node{
int d;
Node *n;

};





int main()
{
    struct Node *a = NULL , *b= NULL , *c= NULL , *t = NULL ;
    a = (Node*) malloc(sizeof(Node)) ;
    b = (Node*) malloc(sizeof(Node)) ;
    c = (Node*) malloc(sizeof(Node)) ;
    a->d = 10 ;
    b->d = 78 ;
    c->d = 167 ;
     a->n =  b ;
    b->n = c ;
    c->n = NULL ;
    t = a;
    while(t!=NULL)
    {
        cout << t->d << " ";
        t = t->n ;
    }

    return 0;
}


