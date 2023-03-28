//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	long long t=1e9+7;
	int solve(int arr[],int n,int sum,vector<vector<int>>&v){
	    
	     if(n<=0){
	         if(sum==0){
	             return 1;
	         }else{
	             return 0;
	         }
	    }

	    if(sum==0){
	        int ans=1;
	        for(int i=n;i>=1;i--){
	            ans=ans+solve(arr,i-1,sum-arr[i-1],v);
	        }
	        return ans;
	    }
	    if(sum<0){
	        return 0;
	    }
	   
	    if(v[n][sum]!=-1){
	        return v[n][sum];
	    }
	    
	   
	        int l1=solve(arr,n-1,sum-arr[n-1],v)%(int)t;
	        int l2=solve(arr,n-1,sum,v)%(int)t;
	        return   v[n][sum]=(l1+l2)%(int)t;
	
	     
	    //return solve(arr,n-1,sum);
	}
	int perfectSum(int arr[], int n, int sum)
	{
	   // sort(arr,arr+n,greater<int>());
	  // reverse(arr,arr+n);
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