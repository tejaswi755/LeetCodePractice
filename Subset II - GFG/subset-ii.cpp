//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {

  public:
  void solve(vector<vector<int>>&v,vector<int>temp,vector<int>&nums,int n,int i){
      if(i==n){
          v.push_back(temp);
          return ;
      }
      
      if(temp.size()>0){
          if(temp.back()!=nums[i]){
              solve(v,temp,nums,n,i+1);
          }
      }else{
          solve(v,temp,nums,n,i+1);
      }
      temp.push_back(nums[i]);
      solve(v,temp,nums,n,i+1);
     
  }
    vector<vector<int>> printUniqueSubsets(vector<int>& nums) {
        
        vector<vector<int>>v;
        vector<int>temp;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        solve(v,temp,nums,n,0);
       // sort(v.begin(),v.end());
        
        return v;
        // Write your code here
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        // char marker;
        // cin >> marker;

        Solution obj;
        vector<vector<int>> ans = obj.printUniqueSubsets(nums);
        sort(ans.begin(), ans.end());
        //   printAns(ans);
        cout << "[ ";
        for (int i = 0; i < ans.size(); i++) {
            cout << "[ ";
            for (int j = 0; j < ans[i].size(); j++) cout << ans[i][j] << " ";
            cout << "]";
        }
        cout << " ]\n";

        // cout<< "~\n";
    }

    return 0;
}

// } Driver Code Ends