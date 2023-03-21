//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:

     bool solve(int n,int arr[],int sum){
         if(sum<0||(n==0&&sum!=0)){
             return false;
             
         }
         if(sum==0){
             return true;
         }
         
         if(arr[n-1]<=sum){
             return solve(n-1,arr,sum-arr[n-1])||solve(n-1,arr,sum);
         }else{
             
         }
         
         return solve(n-1,arr,sum);
     }
    int equalPartition(int N, int arr[])
    {
        // code here
        
        int sum=0;
        
        for(int i=0;i<N;i++){
            sum=sum+arr[i];
        }
        
        if(sum%2!=0){
           
            return false;
        }
        int x=sum/2;
        return solve(N,arr,x);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends