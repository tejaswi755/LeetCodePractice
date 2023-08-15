//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int solve(int coins[],int v,int i,int m, vector<vector<int>>&temp){
	    
	    
	    if(v<0){
	        return 1e9;
	    }
	    if(v==0){
	        return 0;
	    }
	  
	    if(i>=m&&v!=0){
	        
	        return 1e9;
	    }
	    if(temp[v][i]!=-1){
	        return temp[v][i];
	    }
	      
	      return temp[v][i]=min(1+solve(coins,v-coins[i],i,m,temp),solve(coins,v,i+1,m,temp));
	     
	    
	}
	int minCoins(int coins[], int M, int V) 
	{ 
	       vector<vector<int>>temp(V+1,vector<int>(M+1,-1));
	    int ans=solve(coins,V,0,M,temp);
	 
	    
	    if(ans>=1e9){
	        return -1;
	    }else{
	        return ans;
	    }
	   
	} 
	  
};

//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends