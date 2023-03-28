//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
int solve(vector<int> &arr,int n,int x ,int k){
    
    if(n<=0){
        if(x==k){
            return 1;
       
   }else{
       return 0;
   }
   
   }
//     if(x==k){
           
//       return 1;
//   }
  
   
   
   return solve(arr,n-1,x^arr[n-1],k)+solve(arr,n-1,x,k);
    
}
    int subsetXOR(vector<int> arr, int N, int K) {
      //vector<vector<int>>v(N,vector<int>(K,-1));
       return solve(arr,N,0,K); 
        
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        int K;
        cin>>K;
        vector<int> v;
        for(int i = 0;i<N;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }    
        Solution ob;
        cout << ob.subsetXOR(v,N,K) << endl;
    }
    return 0; 
}
// } Driver Code Ends