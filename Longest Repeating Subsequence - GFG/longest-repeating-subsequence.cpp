//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
	       int solve(string &a,string& b,int n,int m,vector<vector<int>>&v){
	           if(n==0||m==0){
	               return 0;
	           }
	           if(v[n][m]!=-1){
	               return v[n][m];
	           }
	           
	           if(a[n-1]==b[m-1]&&n!=m){
	               return v[n][m]=1+solve(a,b,n-1,m-1,v);
	           }else{
	               return v[n][m]=max(solve(a,b,n-1,m,v),solve(a,b,n,m-1,v));
	           }
	       }
		int LongestRepeatingSubsequence(string str){
		    // Code here
		    int n=str.size();
		    vector<vector<int>>v(n+1,vector<int>(n+1,-1));
		    return solve(str,str,n,n,v);
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends