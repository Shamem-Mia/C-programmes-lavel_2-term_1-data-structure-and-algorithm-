#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int>adj[100];
int visited[100];
int dist[100];
vector<int>Bfs(int source){
    vector<int>bfs;
    queue<int>q;
    dist[source] = 0;
    visited[source] = 1;
    q.push(source);
    while(!q.empty()){
        int node = q.front();
        q.pop();
        bfs.push_back(node);
        for(auto it : adj[node]){
            int nxt_node = 1;
            if(visited[node]){
                continue;
            }
            dist[nxt_node] = 1 + dist[node];
            visited[nxt_node] = 1;
            q.push(nxt_node);
        }
    }
    return bfs;
    }

int main()
{
    int i,j,k,n,e;
    vector<int>bfs;
    cout<< "No. of Node : ";
    cin>>n;
    cout<< "No. of Edges : ";
    cin>>e;
    cout<< "Enter No. of Edge Connection : ";
    for(i = 0 ;i < e ; i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);

    }
    int source;
    cout<< "Enter the saource Node : ";
    cin>>source;
    bfs = Bfs(source);
    for(auto it: bfs){
        cout<< it<<" ";
        }
    for( i = 1 ; i < n ; i++ ){
        cout << "Distance : " << i << " = " << dist[i] << endl;
    }


    return 0;
}
