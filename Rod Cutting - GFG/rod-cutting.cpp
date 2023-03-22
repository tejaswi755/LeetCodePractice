//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:
  int solve(int price[],int n,int i,vector<vector<int>>&v){
      
      if(n==0||i==0){
          return 0;
      }
      if(v[n][i]!=-1){
          return v[n][i];
      }
      if(n>=i){
          return v[n][i]=max(price[i-1]+solve(price,n-i,i,v),solve(price,n,i-1,v));
          
      }else{
          return v[n][i]=solve(price,n,i-1,v);
      }
      
  }
    int cutRod(int price[], int n) {
        //code here
        vector<vector<int>>v(n+1,vector<int>(n+1,-1));
        return solve(price,n,n,v);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends