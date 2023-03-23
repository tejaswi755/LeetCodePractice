//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	long long t=1e9+7;
	int solve(int arr[],int n,int sum,vector<vector<int>>&v){
	    if(sum==0){
	        return 1;
	    }
	    if(n==0&&sum!=0){
	        return 0;
	    }
	    if(v[n][sum]!=-1){
	        return v[n][sum];
	    }
	    
	    if(arr[n-1]<=sum){
	        int l1=solve(arr,n-1,sum-arr[n-1],v)%(int)t;
	        int l2=solve(arr,n-1,sum,v)%(int)t;
	        return   v[n][sum]=(l1+l2)%(int)t;
	    }else{
	         return v[n][sum]=solve(arr,n-1,sum,v);
	    }
	    //return solve(arr,n-1,sum);
	}
	int perfectSum(int arr[], int n, int sum)
	{
	    sort(arr,arr+n,greater<int>());
	    vector<vector<int>>v(n+1,vector<int>(sum+1,-1));
        // Your code goes here
        return solve(arr,n,sum,v);
	}
	  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends