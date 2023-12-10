// Question link->https://www.codingninjas.com/studio/problems/count-strongly-connected-components-kosaraju-s-algorithm_1171151

#include<bits/stdc++.h>

void dfs(int node,unordered_map<int,bool> &visited,stack<int> &s,unordered_map<int,list<int>> &adj){

    visited[node] = true;

    for(auto i:adj[node]){

        if(!visited[i]){

            dfs(i,visited,s,adj);

        }

    }

    s.push(node);

}

void revDfs(int node,unordered_map<int,bool> &visited,unordered_map<int,list<int>> &transpose){

    visited[node] = true;

    for(auto i:transpose[node]){

        if(!visited[i]){

            revDfs(i,visited,transpose);

        }

    }

}

int stronglyConnectedComponents(int v, vector<vector<int>> &edges)

{

    

    unordered_map<int,list<int>> adj;

    for(int i=0; i<edges.size(); i++){

        int u = edges[i][0];

        int v = edges[i][1];

        adj[u].push_back(v);

    }

    // TopoLogical Sort

    unordered_map<int,bool> visited;

    stack<int> s;

    for(int i=0; i<v; i++){

        if(!visited[i]){

            dfs(i,visited,s,adj);

        }

    }

    

    

    unordered_map<int,list<int>> transpose;

    for(int i=0; i<v; i++){

        visited[i]=0;

            for(auto nbr:adj[i]){

            transpose[nbr].push_back(i);

        }

    }

    

    

    int count = 0; 

    while(!s.empty()){

        int top = s.top();

        s.pop();

            if(!visited[top]){

                count++;

                revDfs(top,visited,transpose);

            }

    }

    return count;

}

