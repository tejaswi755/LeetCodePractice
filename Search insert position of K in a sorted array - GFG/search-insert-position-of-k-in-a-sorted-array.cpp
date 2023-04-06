//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int searchInsertK(vector<int>Arr, int N, int k)
    {
        // code here
        int s=0;
        int e=N-1;
        int ans=0;
        while(s<=e){
            int mid=(e-s)/2+s;
            if(Arr[mid]==k){
                ans=mid;
             return ans;
            }else if(Arr[mid]<k){
                ans=mid+1;
                s=mid+1;
                
            }
            else{
                e=mid-1;
            }
        }
       
        return ans;
        
          
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
        cin >> N;
        vector<int>Arr(N);
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.searchInsertK(Arr, N, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends