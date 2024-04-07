#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;





int main()
{

    queue < int > q ;
    int n,sum = 0 ,v;
    cout<< "Enter the value of N : " ;
    cin>>n;
    for( int i = 0 ; i < n ; i++){

        cin>>v;
        q.push(v);


    }
    while(!q.empty()){
        sum += q.front();
        q.pop();

    }

    cout<<"the sum : "<<sum;





    return 0;
}
