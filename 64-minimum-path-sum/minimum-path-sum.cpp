class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> ans(m, vector<int>(n, 0));
        for(int i =0; i<m; i++){
            for(int j =0; j<n; j++){
                if(i==0 && j==0) ans[0][0] =grid[0][0];
                else if(i==0 && j>0){
                    ans[i][j] = grid[i][j]+ans[i][j-1];
                }
                else if(i>0 && j==0){
                    ans[i][j] = grid[i][j]+ans[i-1][j];
                }
                else{
                    ans[i][j]= grid[i][j]+min(ans[i-1][j], ans[i][j-1]);
                }
            }
        }

        return ans[m-1][n-1];
    }
};