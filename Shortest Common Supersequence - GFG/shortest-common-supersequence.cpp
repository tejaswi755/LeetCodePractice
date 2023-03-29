//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++


class Solution
{
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
    //Function to find length of shortest common supersequence of two strings.
    int shortestCommonSupersequence(string X, string Y, int m, int n)
    {
        vector<vector<int>>v(m+1,vector<int>(n+1,-1));
        int lcs=solve(X,Y,m,n,v);
        int ans=m+n-lcs;
        return ans;
        //code here
    }
};

//{ Driver Code Starts.

int main()
{   
    
    int t;
    
    //taking total testcases
    cin >> t;
    while(t--){
    string X, Y;
    //taking String X and Y
	cin >> X >> Y;
	
	//calling function shortestCommonSupersequence()
	Solution obj;
	cout << obj.shortestCommonSupersequence(X, Y, X.size(), Y.size())<< endl;
    }
	return 0;
}


// } Driver Code Ends