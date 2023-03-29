//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int minDeletions(string str, int n);

int main(){
    int t;
    cin >> t;
    while(t--){
        
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << minDeletions(s, n) << endl;

    }
return 0;
}
// } Driver Code Ends

 int solve(string &x,string &y,int m,int n, vector<vector<int>>&v){
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
int minDeletions(string str, int n) { 
    //complete the function here 
    string a=str;
        reverse(str.begin(),str.end());
        
        vector<vector<int>>v(n+1,vector<int>(n+1,-1));
        return n-solve(a,str,n,n,v);
} 