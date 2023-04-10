//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    bool solve(int arr[],int n,int M,int mid){
        int count=1;
        //int i=0;
        int sum=0;
        for(int i=0;i<n;i++){
            
            if((sum+arr[i])<=mid){
               sum+=arr[i];
            }else{
                
                 count++;
                sum=arr[i];
                 if(count>M||arr[i]>mid){
                return false;
            }
            }
        }
        return true;
        
    }
    int findPages(int A[], int N, int M) 
    {
        //code here
        if(M>N){
            return -1;
        }
        //sort(A,A+N,greater<int>());
        int sum=0;
        int mini=INT_MIN;
        for(int i=0;i<N;i++){
            mini=max(mini,A[i]);
            sum=sum+A[i];
        }
        int e=sum;
        int s=0;
        int ans=-1;
        //return solve(A,N,M,25);
        while(s<=e){
            int mid=(e-s)/2+s;
         // cout<<"mid"<<mid;
       
            if(solve(A,N,M,mid)==true){
                ans=mid;
              //  cout<<ans;
                    e=mid-1;
        
            }else{
                 s=mid+1;
            }
           // cout<<endl;
            
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends