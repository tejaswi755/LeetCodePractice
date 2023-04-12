//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  int solve(vector<int>& height, int n, int k,vector<int>&v){
      
      if(n==0){
          return 0;
          
      }
      if(n<0){
          return 100000000;
      }
      if(v[n]!=-1){
          return v[n];
      }
      
      int mini=INT_MAX;
      
      for(int i=1;i<=k;i++){
          int temp=solve(height,n-i,k,v)+abs(height[n]-height[n-i]);
          mini=min(mini,temp);
      }
      //cout<<mini<<" ";
    return v[n]=mini;
      
  }
  
    int minimizeCost(vector<int>& height, int n, int k) 
    {
        // Code here
        vector<int>v(n+1,-1);
        return solve(height,n-1,k,v);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minimizeCost(arr, N, K) << "\n";
    }
    return 0;
}
// } Driver Code Ends