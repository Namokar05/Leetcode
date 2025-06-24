class Solution {
private:
    voiddfs(int node,vector<int>adjLs[],int vis[]){
        vis[noce]=1;
        for(auto it:adjLs[node]){
            if(!vis[it]){
                dfs(it,adjLs,vis)
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>adj>int V) {
        vector<int>adjLs[V];
        for(i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if (adj[i][j]==!&&i!=j){
                    adjLs[i].push_back(j);
                    adjLs[j].push_back(i);
                }
            }
        }
        int vis[V]={0};
        int c=0;
        for(int i=0;i<v;i++){
            if(!vis[i]){
                cont++;
                dfs(i,adjLs,vis);

            }

        }
        retun cnt;
    }
};