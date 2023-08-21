//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        // Code here
        int time=0;
       
        int n=grid.size();
        int m=grid[0].size();
        int t=0;
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                }
                if(grid[i][j]==1){
                    t++;
                }
                
            }
        }
        
        while(!q.empty()){
             
             int i=q.size();
             bool flag=false;
             while(i--){
                 pair<int,int>p=q.front();
                 q.pop();
                 int r[]={-1,0,1,0};
                 int c[]={0,1,0,-1};
                 for(int i=0;i<4;i++){
                     int nr=p.first+r[i];
                     int nc=p.second+c[i];
                     
                     if(nr>=0&&nr<n&&nc>=0&&nc<m&&grid[nr][nc]==1){
                         t--;
                         grid[nr][nc]=2;
                         flag=true;
                         q.push({nr,nc});
                     }
                 }
             }
             if(flag==true){
                 time++;
             }
        }
        
        return t==0?time:-1;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends