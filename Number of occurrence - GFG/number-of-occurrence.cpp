//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	 int temp1=-1;
     int s=0;
     int e=n-1;
     while(s<=e){
         int mid=(s+e)/2;
         
         if(arr[mid]==x){
             temp1=mid;
             e=mid-1;
         }else if(arr[mid]>x){
             
             e=mid-1;
             
         }else{
             s=mid+1;
         }
         
     }
       // ans.push_back(temp);
       int  temp2=-1;
     s=0;
     e=n-1;
      while(s<=e){
         int mid=(s+e)/2;
         
         if(arr[mid]==x){
             temp2=mid;
             s=mid+1;
         } else if(arr[mid]<x){
             s=mid+1;
             
         }else{
             e=mid-1;
         }
         
     }
     //cout<<temp1<<" "<<temp2;
     if(temp1==-1&&temp2==-1){
         return 0;
     }else if(temp1==-1||temp2==-1){
         return 1;
     }
     return (temp2-temp1+1);
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends