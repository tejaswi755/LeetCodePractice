//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long int ans(vector<long long>&prices,int n,int i,bool buy,vector<vector<long long int>>&v){
            if(i>=n){
                return 0;
            }    
            
            if(v[i][buy]!=-1){
                return v[i][buy];
            }
            long long an=0;
            if(buy){
                
            an=max(-prices[i]*1ll+ans(prices,n,i+1,0,v),ans(prices,n,i+1,1,v));
                
            }else{
                
                an=max(prices[i]*1ll+ans(prices,n,i+1,1,v),ans(prices,n,i+1,0,v));
                
            }
          return v[i][buy]=an*1ll;  
    }
    long long maximumProfit(vector<long long>&prices, int n) {
        // Code here
        vector<vector<long long int>>v(n+1,vector<long long int>(2,0));
        vector<vector<long long>> dp(n+1,vector<long long>(2,0));
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<=1;j++){
                if(j){
                    dp[i][j]=max(dp[i+1][0]-prices[i],0+dp[i+1][1]);
                }
                else{
                    dp[i][j]=max(prices[i]+dp[i+1][1],dp[i+1][0]);
                }
            }
        }
        return dp[0][1];
   // return ans(prices,n,0,1,v);
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        vector<long long> prices;
        
        for(int i=0; i<n; ++i){
            long long x; cin>>x;
            prices.push_back(x);
        }
        
        Solution obj;
        cout<<obj.maximumProfit(prices, n)<<"\n";
    }
    return 0;
}
// } Driver Code Ends