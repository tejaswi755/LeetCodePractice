//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
       bool ist(int n,int k,vector<int>stalls,int mid){
           
           int count=1;
           int i=1;
           int prev=stalls[0];
           //cout<<prev;
           while(i<n){
               if((stalls[i]-prev)>=mid){
                   count++;
                   prev=stalls[i];
                   i++;
               }else{
                   i++;
               }
            //   cout<<count<<" ";
               if(count>=k){
                   return true;
               }
           }
return false;
           
       }
    int solve(int n, int k, vector<int> &stalls) {
        sort(stalls.begin(),stalls.end());
        
    int e=stalls[n-1];
    //cout<<"e"<<e;
    int s=1;
    int ans=-1;
    
    while(s<=e){
        int mid=(e-s)/2+s;
        //cout<<"mid"<<mid<<endl;
        if(ist(n,k,stalls,mid)==true){
            ans=mid;
             s=mid+1;
        }else {
             e=mid-1;
          
        }
    }
    return ans;
        // Write your code here
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends