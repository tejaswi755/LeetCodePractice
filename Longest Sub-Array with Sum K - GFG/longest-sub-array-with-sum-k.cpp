//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        map<int,int>m;
        int sum=0;
        int ans=0;
        for(int i=0;i<N;i++){
            sum+=A[i];
            if(sum==K){
                ans=i+1;
            }  
            if(m.find(sum)==m.end()){
                m[sum]=i;
            }
            if(m.find(sum-K)!=m.end()){
                if(i-m[sum-K]>ans){
                    ans=i-m[sum-K];
                }
            }
            
        }
        // Complete the function
        return ans;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends