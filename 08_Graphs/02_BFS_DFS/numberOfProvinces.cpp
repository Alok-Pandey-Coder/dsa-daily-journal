class Solution {
public:
    void dfs(int idx, vector<vector<int>>& mat, vector<int>& visit) {
        visit[idx] = 1;
        for(int i = 0; i < mat.size(); i++) {
            if(mat[i][idx] == 1) {
                if(!visit[i]) {
                    dfs(i, mat, visit);
                }
            }
        }
        return;
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int> visited(n,0);
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            if(!visited[i]) {
                cnt++;
                dfs(i, isConnected, visited);
            }
        }
        return cnt;
        
    }
};
