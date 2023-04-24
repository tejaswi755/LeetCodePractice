//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int minimumDays(int S, int N, int M){
        int sun=S/7;
        
        // code here
        int temp=M*S;
        int ans;
        
        if(temp%N==0){
            ans=temp/N;
        }else{
            ans=temp/N+1;
        }
       if(ans<=(S-sun)){
           return ans;
       }else{
           return -1;
       }
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int S, N, M;
        cin>> S >> N >> M;
        
        Solution ob;
        cout<<ob.minimumDays(S, N, M)<<endl;
    }
    return 0;
}
// } Driver Code Ends