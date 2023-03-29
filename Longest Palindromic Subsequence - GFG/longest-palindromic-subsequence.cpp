//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    int solve(string x,string y,int m,int n, vector<vector<int>>&v){
        if(m==0||n==0){
            return 0;
        }
        
        if(v[m-1][n-1]!=-1){
            return v[m-1][n-1];
        }
        if(x[m-1]==y[n-1]){
            return v[m-1][n-1]=1+solve(x,y,m-1,n-1,v);
        }
        return v[m-1][n-1]= max(solve(x,y,m-1,n,v),solve(x,y,m,n-1,v));
    }
    int longestPalinSubseq(string A) {
        //code here
        string a=A;
        reverse(A.begin(),A.end());
        int size=a.size();
        vector<vector<int>>v(size+1,vector<int>(size+1,-1));
        return solve(a,A,size,size,v);
    }
};

//{ Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends