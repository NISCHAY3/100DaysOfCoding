// Question Link-->https://www.codingninjas.com/studio/problems/topological-sort_982938?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar&leftPanelTabValue=SUBMISSION

#include <bits/stdc++.h> 
bool topoSort(int node,vector< bool> &visited, stack<int> &s,unordered_map<int, list<int> > &adj)
{

        visited[node] =1;
        for(auto i:adj[node])

        {
            if(!visited[i])
                topoSort(i,visited,s,adj);
        }

        // push into stack
        s.push(node);
}


vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    unordered_map<int, list<int> > adj;
    // creation of adjcency list

    for(int i =0;i<e;i++)
    {
        int  u = edges[i][0];
        int  v = edges[i][1];

        adj[u].push_back(v);
    }


    // call dfs topological sort for all components
    vector< bool> visited(v);
    stack<int> s;    
    for(int i=0;i<v;i++){
        if(!visited[i])
            topoSort(i,visited,s,adj);
    }

    vector<int> ans;

    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }
    return ans;
}