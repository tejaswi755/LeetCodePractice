//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

  public:
//   int solve(int arr[],int n,int s1,int range,vector<vector<int>>&v){
//       if(n==0){
//           return abs(range-2*s1);
//       }
//       if(v[n-1][s1]!=-1){
//           return v[n-1][s1];
//       }
      
//       return v[n-1][s1]=min(solve(arr,n-1,s1+arr[n-1],range,v),solve(arr,n-1,s1,range,v));
      
//   }
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    
	    int sum=0;
	    for(int i=0;i<n;i++){
	        sum=sum+arr[i];
	    }
	    vector<vector<int>>v(n+1,vector<int>(sum+1,-1));
        
        for(int i=0;i<=n;i++){
            for(int j=0;j<=sum;j++){
                if(j==0){
                    v[i][j]=true;
                }else if(i==0){
                    v[i][j]=false;
                }
            }
        }
        
     for(int i=1;i<=n;i++){
            for(int j=1;j<=sum;j++){
                if(arr[i-1]<=j){
                    v[i][j]=v[i-1][j-arr[i-1]]||v[i-1][j];
                }else{
                    v[i][j]=v[i-1][j];
                }
            }
        }
        int mini=INT_MAX;
       // cout<<sum;
         for(int i=0;i<=sum/2;i++){
             if(v[n][i]==true){
                // cout<<i<<" ";
                 mini=min(mini,sum-2*i);
                 //cout<<mini<<" ";
             }
          
         }
    return mini;
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