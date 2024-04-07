#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector < int > V1 ;
    for(int i = 0 ; i < 5 ; i++ ){
        V1.push_back(i);

    }
    V1.push_back(50);
    V1.push_back(1000);

    for( int i= 0 ; i < V1.size() ; i++){


        cout<< "\t" << V1[i];
    }




    return 0;
}
