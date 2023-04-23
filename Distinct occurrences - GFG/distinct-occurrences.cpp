//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
/*You are required to complete this method*/

class Solution
{
    public:
    int ans(string &s,string &t,int i,int j,vector<vector<int>>&v){
        if(j==-1){
            return 1;
        }
        if(i==-1){
            return 0;
        }
        if(v[i][j]!=-1){
            return v[i][j];
        }
        if(s[i]==t[j]){
            return v[i][j]= (ans(s,t,i-1,j-1,v)%1000000007+ans(s,t,i-1,j,v)%1000000007)%1000000007;
        }else{
            return v[i][j]=ans(s,t,i-1,j,v)%1000000007;
        }
        
        
    }
    int subsequenceCount(string S, string T)
    {
      //Your code here
      
      int i=S.size();
      int j=T.size();
      vector<vector<int>>v(i+1,vector<int>(j+1,-1));
      return ans(S,T,i-1,j-1,v);
      
    }
};
 


//{ Driver Code Starts. 

//  Driver code to check above method
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string tt;
		cin>>s;
		cin>>tt;
		
		Solution ob;
		cout<<ob.subsequenceCount(s,tt)<<endl;
		
		
	}
  
}
// } Driver Code Ends