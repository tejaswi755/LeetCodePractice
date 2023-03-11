//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    
    int solve(int W, int wt[], int val[], int n,vector<vector<int>>&dp){
        if(W==0||n==0){
            return 0;
        }
        if(dp[n-1][W]!=-1){
            return dp[n-1][W];
        }
        
        if(W>=wt[n-1]){
           dp[n-1][W]= max((val[n-1]+solve(W-wt[n-1],wt,val,n-1,dp)),solve(W,wt,val,n-1,dp));
        }else{
           dp[n-1][W]= solve(W,wt,val,n-1,dp);
        }
        return dp[n-1][W];
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
        vector<vector<int>>dp(n+1,vector<int>(W+1,-1));
        
        return solve(W,wt,val,n,dp);
       // Your code here
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends