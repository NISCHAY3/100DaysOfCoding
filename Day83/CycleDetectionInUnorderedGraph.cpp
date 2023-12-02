// Question Link-->https://www.codingninjas.com/studio/problems/cycle-detection-in-undirected-graph_1062670

#include<bits/stdc++.h>

bool isCycleBFS(int node, unordered_map<int,vector<int>>&adj, vector<bool>&visited){
    unordered_map<int, int>parent;
    parent[node] = -1;

    queue<int>q;
    q.push(node);
    visited[node] = true;

    while(!q.empty()){
        int curr = q.front();
        q.pop();

        for(int child:adj[curr]){
            if(visited[child] && child != parent[curr]) return true;
            else if(!visited[child]){
                q.push(child);
                visited[child] = true;
                parent[child] = curr;
            }
        }
    }
    return false;
}

string cycleDetection (vector<vector<int>>& edges, int n, int m){
    // create adjacency list
    unordered_map<int,vector<int>>adj;
    for(int i=0; i<m; i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // handling disconnected components
    vector<bool>visited(n, false);
    for(int i=0; i<n; i++){
        if(!visited[i]){
            bool ans = isCycleBFS(i, adj, visited);
            if(ans) return "Yes";
        }
    }
    return "No";
}

