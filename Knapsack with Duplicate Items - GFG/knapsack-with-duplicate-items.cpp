//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
// int solve(int n,int w,int val[],int wt[],vector<vector<int>>&v){
//     if(n==0||w==0){
//         return 0;
//     }
//     if(v[n-1][w]!=-1){
//         return v[n-1][w];
//     }
//     if(wt[n-1]<=w){
        
//         return v[n-1][w]= max(val[n-1]+solve(n,w-wt[n-1],val,wt,v),solve(n-1,w,val,wt,v));
//     }else{
//       return v[n-1][w]=solve(n-1,w,val,wt,v);
//     }
    
// }
    int knapSack(int N, int W, int val[], int wt[])
    {
        vector<vector<int>>v(N+1,vector<int>(W+1,-1));
        // code here
        for(int i=0;i<=N;i++){
            for(int j=0;j<=W;j++){
                if(j==0){
                    v[i][j]=0;
                }else if(i==0){
                    v[i][j]=0;
                }
            }
        }
         for(int i=1;i<=N;i++){
            for(int j=1;j<=W;j++){
                if(wt[i-1]<=j){
                    v[i][j]=max(val[i-1]+v[i][j-wt[i-1]],v[i-1][j]);
                }else{
                    v[i][j]=v[i-1][j];
                }
            }
        }
      //  return solve(N,W,val,wt,v);
      return v[N][W];
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}
// } Driver Code Ends