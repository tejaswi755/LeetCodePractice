//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
      #define mod 1000000007
      
    public:
    //Function to count number of ways to reach the nth stair.
   int solve(int n,vector<int>&v){
       if(n==0){
            return 1;
            
        }
        if(n<0){
            return 0;
        }
        if(v[n]!=-1){
            return v[n]; 
        }
        int left=solve(n-1,v);
        int right=solve(n-2,v);
        
        return v[n]=(left%mod+right%mod)%mod; 
   }
  
   
    int countWays(int n)
    {
        // your code here
        vector<int>v(n+1,-1);
        return solve(n,v);
       
    }
};



//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}

// } Driver Code Ends