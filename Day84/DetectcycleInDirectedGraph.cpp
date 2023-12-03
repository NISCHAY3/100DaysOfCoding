// Question Link-->https://www.codingninjas.com/studio/problems/detect-cycle-in-a-directed-graph_1062626?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar&leftPanelTabValue=SUBMISSION


#include<unordered_map>
#include<list>

// function to check cycle detection in graph
bool isCycle(int node, unordered_map<int, bool> &visited,unordered_map<int, bool> &dfsvisited,unordered_map<int, list<int> > &adj)
{
    visited[node]=true;
    dfsvisited[node]=true;
    
    for(auto neighbour:adj[node])
    {
        if(!visited[neighbour])
        {
            bool  cycleDetected = isCycle(neighbour,visited,dfsvisited,adj);
            if(cycleDetected)
                return true;
        }
        else if(dfsvisited[neighbour])
            return true;
    }
    dfsvisited[node] = false;
    return false;
}



int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  

    
    unordered_map<int, list<int> > adj;
    for(int i=0;i<edges.size();i++)
    {

      int u = edges[i].first;
      int v = edges[i].second;

      adj[u].push_back(v);
    }


    unordered_map<int, bool> visited;
    unordered_map<int, bool> dfsvisited;
    
    for(int i=0;i<n;i++)
    {
        if(!visited[i])
        {
            bool cycleFound  = isCycle(i,visited,dfsvisited,adj);
            if(cycleFound)
                return true;   
        }
    }
    return false;
  
}