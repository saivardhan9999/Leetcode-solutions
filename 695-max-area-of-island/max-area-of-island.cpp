class Solution {
public:
    int dfs(vector<vector<int>>& grid,int r,int c)
    {
        if(r<0 || r>=grid.size() || c<0 || c>=grid[0].size()) return 0;
        if(grid[r][c]==0) return 0;
        grid[r][c]=0;
        int count=1;
        count += dfs(grid,r+1,c);
        count += dfs(grid,r-1,c);
        count += dfs(grid,r,c+1);
        count += dfs(grid,r,c-1);
        return count;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int area=0,maxarea=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1)
                {
                    area=dfs(grid,i,j);
                    maxarea=max(maxarea,area);
                }
            }
        }
        return maxarea;
    }
};