class Solution {
public:
    
    int solve(vector<vector<int>>& grid,int r,int c,int rs,int cs, vector<vector<int>>&v){
        if(r==rs-1&&c==cs-1){
            return grid[r][c];
        }
        if(r>=rs||c>=cs){
            return INT_MAX-1;
        }
        if(v[r][c]!=-1){
            return v[r][c];
            
        }
        
        return v[r][c]=grid[r][c]+min(solve(grid,r+1,c,rs,cs,v),solve(grid,r,c+1,rs,cs,v));
        
    }
    int minPathSum(vector<vector<int>>& grid) {
        int sizer=grid.size();
        int sizec=grid[0].size();
        vector<vector<int>>v(sizer+1,vector<int>(sizec,-1));
       return solve(grid,0,0,sizer,sizec,v);
        
        
    }
};