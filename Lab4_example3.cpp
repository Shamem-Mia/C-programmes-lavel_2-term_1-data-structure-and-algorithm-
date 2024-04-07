#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue < int > q ;
    for( int i = 1 ; i < 10 ; i = i+2){

        q.push(i);

    }

    while( !q.empty() ){
        cout<<q.front()<< " " ;
        q.pop();
    }

    return 0;
}
