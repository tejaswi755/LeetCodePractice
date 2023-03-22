//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

  public:
  int solve(int arr[],int n,int s1,int range,vector<vector<int>>&v){
      if(n==0){
          return abs(range-2*s1);
      }
      if(v[n-1][s1]!=-1){
          return v[n-1][s1];
      }
      
      return v[n-1][s1]=min(solve(arr,n-1,s1+arr[n-1],range,v),solve(arr,n-1,s1,range,v));
      
  }
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    
	    int sum=0;
	    for(int i=0;i<n;i++){
	        sum=sum+arr[i];
	    }
	    vector<vector<int>>v(n+1,vector<int>(sum+1,-1));
	    return solve(arr,n,0,sum,v);
	} 
};


//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends