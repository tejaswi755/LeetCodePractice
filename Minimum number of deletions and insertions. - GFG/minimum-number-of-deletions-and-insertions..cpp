//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
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
	int minOperations(string str1, string str2) 
	{ 
	    int s1=str1.size();
	    int s2=str2.size();
	    vector<vector<int>>v(s1+1,vector<int>(s2+1,-1));
	    int s=solve(str1,str2,s1,s2,v);
	    
	    return (s1+s2-2*s);
	    
	    
	    // Your code goes here
	    
	} 
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends