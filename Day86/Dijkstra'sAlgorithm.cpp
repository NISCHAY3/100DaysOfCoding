// Question Link-->https://www.codingninjas.com/studio/problems/dijkstra-s-shortest-path_920469?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar&leftPanelTabValue=SUBMISSION

#include <bits/stdc++.h> 

vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {

    // Write your code here.

    unordered_map<int,list<pair<int,int>>> adj;

    for(int i=0;i<edges;i++){

        int u=vec[i][0];

        int v=vec[i][1];

        int w=vec[i][2];

        adj[u].push_back({v,w});

        adj[v].push_back({u,w});

    }

    vector<int> dist(vertices,INT_MAX);

    dist[source]=0;

    set<pair<int,int>> st;

    st.insert({0,0});

    while(!st.empty()){

        auto top=*(st.begin());

        st.erase(st.begin());

        int topnode=top.second;

        int distance=top.first;

        for(auto nbr:adj[topnode]){

            if(distance+nbr.second<dist[nbr.first]){

              auto record = st.find({dist[nbr.first], nbr.first});

              if(record!=st.end()){

                  st.erase(record);

              }

              dist[nbr.first]=distance+nbr.second;

              st.insert({dist[nbr.first],nbr.first});

            }

        }

    }

    return dist;

}

 