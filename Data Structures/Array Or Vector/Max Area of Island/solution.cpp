
int dfs(int x,int y, vector<vector<int>>&grid, vector<vector<bool>>&v)
    {
    
    
        if(x<0 || y<0 || x>=grid.size()|| y>=grid[0].size() || v[x][y] == true || grid[x][y] == 0)
          {
              return 0;
          }
        
        else
          {
              v[x][y] = true;

               int    top = dfs(x-1,y,grid,v);

               int    left = dfs(x,y-1,grid,v);

               int    right = dfs(x,y+1,grid,v);

               int   down = dfs(x+1,y,grid,v);


              return (1+(left+right+down+top));

          }
      }
      
 int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int ans = 0;
        
        vector<vector<bool>> visited (grid.size(), vector<bool>(grid[0].size(), false));
        
        int n = grid.size();
        int m = grid[0].size();
    
            for(int i=0;i<n;i++)
            {
                for(int j = 0;j<m;j++)
                {
                    ans = max(ans,dfs(i,j,grid,visited));
                }
            }
        
        return ans;
    }
