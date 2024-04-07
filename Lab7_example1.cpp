#include<iostream>
#include<bits/stdc++.h>
using namespace std;






int main()
{
    vector<int>graph[5];
    int nodes,edge,u,v;
    cout<< "Enter Number of Node : ";
    cin>>nodes;
    cout<< "Enter Number of Edge : ";
    cin>>edge;
    for(int i = 0 ; i <edge ; i++){
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    cout<< "Adjacent list of the Graph " ;
    for( int j = 0 ; j < nodes ; j++){
        cout<<j<< "--> ";
        for(auto it:graph[j]){
            cout<<it<< " ";
        }
        cout<<endl;
    }


    return 0;
}
