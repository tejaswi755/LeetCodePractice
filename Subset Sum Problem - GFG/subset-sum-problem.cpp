//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:

// bool ans(vector<int>arr,int sum,int n,vector<vector<int>>&v){
//     if(sum<0||(n==0&&sum!=0)){
//         return false;
//     }
//     if(sum==0){
//         return true;
//     }
//     if(v[n-1][sum]!=-1){
//         return v[n-1][sum];
//     }
    
//     if(arr[n-1]<=sum){
        
//          v[n-1][sum]=(ans(arr,sum-arr[n-1],n-1,v)||ans(arr,sum,n-1,v));
//     }else{
//          v[n-1][sum]= ans(arr,sum,n-1,v);
//     }
   
   
//     return v[n-1][sum];
    
// }
    bool isSubsetSum(vector<int>arr, int sum){
        int size=arr.size();
        // code here 
        vector<vector<int>>v(size+1,vector<int>(sum+1,-1));
        
        for(int i=0;i<=size;i++){
            for(int j=0;j<=sum;j++){
                if(j==0){
                    v[i][j]=true;
                }else if(i==0){
                    v[i][j]=false;
                }
            }
        }
        
     for(int i=1;i<=size;i++){
            for(int j=1;j<=sum;j++){
                if(arr[i-1]<=j){
                    v[i][j]=v[i-1][j-arr[i-1]]||v[i-1][j];
                }else{
                    v[i][j]=v[i-1][j];
                }
            }
        }
        
        return v[size][sum];
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends