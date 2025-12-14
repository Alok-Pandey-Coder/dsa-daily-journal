void depthFirstSearch(vector<vector<int>>& adj, vector<int>& ans, int node, vector<int>& visited) {
        visited[node] = 1;
        ans.push_back(node);
        
        for(auto it: adj[node]) {
            if(!visited[it]) {
                depthFirstSearch(adj, ans, it, visited);
            }
        }
        return;
    
    }
    vector<int> dfs(vector<vector<int>>& adj) {
        int n = adj.size();
        vector<int> visited(n, 0);
        vector<int> ans;
        depthFirstSearch(adj, ans, 0, visited);
        return ans;
        
    }
