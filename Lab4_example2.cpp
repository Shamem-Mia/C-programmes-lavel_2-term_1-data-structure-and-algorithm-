#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack < int > st1 ;
    for( int i = 0 ; i < 7 ; i++ ){
        st1.push(i);

    }
    while( !st1.empty() ){
        cout<< st1.top() << " " ;
        st1.pop();
    }
    return 0;
}
