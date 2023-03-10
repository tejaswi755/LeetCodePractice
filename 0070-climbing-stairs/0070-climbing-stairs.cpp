class Solution {
public:
    
   
//     int solve(int n,vector<int>dp){
//         if(n==1){
//             return 1;
//         }
//         if(n==2){
//             return 2;
            
//         }
//         if(dp[n]!=-1){
//             return dp[n];
//         }
        
//       dp[n]= solve(n-1,dp)+solve(n-2,dp);
//         return dp[n];
//     }
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        if(n==1){
            return 1;
        }
        dp[1]=1;
 
        dp[2]=2;
        for(int i=3;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        
        return dp[n];
        
    }
};