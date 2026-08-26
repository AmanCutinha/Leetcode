class Solution {
public:
    void dfs(vector<vector<char>>& grid,int r,int c){
        int rows=grid.size();
        int col=grid[0].size();

        if(r<0 || r>=rows || c<0 || c>=col) return;

        if(grid[r][c]=='0' || grid[r][c]=='$') return;

        grid[r][c]='$';

        dfs(grid,r+1,c);
        dfs(grid,r-1,c);
        dfs(grid,r,c-1);
        dfs(grid,r,c+1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int ans=0;
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    dfs(grid,i,j);
                    ans++;
                }
            }
        }

        return ans;
    }
};