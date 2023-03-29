class Solution {
public:
    int solve(string a,string b,int n,int m, vector<vector<int>>&v){
        if(n==0||m==0){
            return 0;
        }
        if(v[n][m]!=-1){
            return v[n][m];
        }
        
        if(a[n-1]==b[m-1]){
            return v[n][m]=1+solve(a,b,n-1,m-1,v);
        }else{
            return v[n][m]=max(solve(a,b,n-1,m,v),solve(a,b,n,m-1,v));
        }
        
    }
    bool isSubsequence(string s, string t) {
        int n=s.size();
        int m=t.size();
        vector<vector<int>>v(n+1,vector<int>(m+1,-1));
        int z=solve(s,t,n,m,v);
        if(n==z){
            return true;
        }else{
            return false;
        }
    }
};