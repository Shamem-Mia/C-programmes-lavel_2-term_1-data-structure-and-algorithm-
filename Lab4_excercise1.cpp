#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack < int > stk ;
    int sum = 0 , n ;
    cout << "Enter 5 intrger Value : " ;
    for( int i = 0 ; i < 5 ; i++){
            cin >> n ;
         stk.push(n);

    }
    while(!stk.empty()){
        sum += stk.top() ;
        stk.pop();
    }
    cout<< "Total sum : " << sum ;

    return 0;
}
