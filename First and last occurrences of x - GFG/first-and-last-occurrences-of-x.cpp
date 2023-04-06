//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    // code here
    vector<int >ans;
     
     int temp=-1;
     int s=0;
     int e=n-1;
     while(s<=e){
         int mid=(s+e)/2;
         
         if(arr[mid]==x){
             temp=mid;
             e=mid-1;
         }else if(arr[mid]>x){
             
             e=mid-1;
             
         }else{
             s=mid+1;
         }
         
     }
        ans.push_back(temp);
        temp=-1;
     s=0;
     e=n-1;
      while(s<=e){
         int mid=(s+e)/2;
         
         if(arr[mid]==x){
             temp=mid;
             s=mid+1;
         } else if(arr[mid]<x){
             s=mid+1;
             
         }else{
             e=mid-1;
         }
         
     }
     ans.push_back(temp);
      
        return ans;
     
     }
     
    


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends