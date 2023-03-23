//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  long long int solve(int coins[],int n,int sum,vector<vector<long long int>>&v){
      if(sum==0){
          return 1*1ll;
      }
      if(n==0&&sum!=0){
          return 0*1ll;
      }
      if(v[n-1][sum]!=-1){
          return v[n-1][sum];
      }
      
      if(coins[n-1]<=sum){
          return v[n-1][sum]=solve(coins,n,sum-coins[n-1],v)*1ll+solve(coins,n-1,sum,v)*1ll;
      }else{
          return v[n-1][sum]=solve(coins,n-1,sum,v)*1ll;
      }
      
  }
    long long int count(int coins[], int N, int sum) {
     vector<vector<long long int>>v(N+1,vector<long long int>(sum+1,-1));
        // code here.
        return solve(coins,N,sum,v);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends