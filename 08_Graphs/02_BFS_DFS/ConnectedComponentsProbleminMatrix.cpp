class Solution {
  public:
    void dfs(int v, vector<int> adj[], vector<int>&visited, vector<int>&temp){
        visited[v] = 1;
        temp.push_back(v);
        
        for(auto it : adj[v]) {
            if(!visited[it]) {
                dfs(it, adj, visited, temp);
            }
        }
        return;
    }
    vector<vector<int>> getComponents(int V, vector<vector<int>>& edges) {
        // code here
        int n = edges.size();
        vector<int> adj[V];
        for(int i = 0; i < n; i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<int> visited(V,0);
        vector<vector<int>> ans;
        for(int i = 0; i < V; i++) {
            if(!visited[i]) {
                vector<int> temp;
                dfs(i, adj, visited, temp);
                ans.push_back(temp);
            }
        }
        return ans;
    }
};
