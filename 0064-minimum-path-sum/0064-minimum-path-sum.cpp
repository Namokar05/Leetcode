class Solution {
public:
    int minPathSum(vector<vector<int>>& grid, int r, int c, vector<vector<int>> &memo){
        if(memo[r][c] != -1) return memo[r][c];
        if(r == 0 && c == 0) return memo[r][c] = grid[r][c];
        if(r == 0) return memo[r][c] = grid[r][c] + minPathSum(grid, r, c-1, memo);
        if(c == 0) return memo[r][c] = grid[r][c] + minPathSum(grid, r-1, c, memo);

        return memo[r][c] = grid[r][c] + min(minPathSum(grid, r-1, c, memo),
                                             minPathSum(grid, r, c-1, memo));
    }

    int minPathSum(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        vector<vector<int>> memo(r, vector<int>(c, -1));
        return minPathSum(grid, r-1, c-1, memo);
    }
};