// QUestion Link-->https://www.codingninjas.com/studio/problems/bfs-in-graph_973002

void BFS(int curr, vector<int>&vis,int n, vector<vector<int>> &adj, vector<int>&ans){
    
    vis[curr]=1;
    queue<int>q;
    q.push(curr);
    while(!q.empty()){
        int node=q.front();
        q.pop();
        ans.push_back(node);
        for(int &adjacent:adj[node]){
            if(!vis[adjacent]){
                vis[adjacent]=1;
                q.push(adjacent);
            }
        }
    }
}

vector<int> bfsTraversal(int n, vector<vector<int>> &adj){
  vector<int>vis(n,0);
  vector<int>ans;
   BFS(0,vis,n,adj,ans);

  return ans;
}