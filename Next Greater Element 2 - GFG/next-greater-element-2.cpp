//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> nextGreaterElement(int N, vector<int>& arr) {
        // code here
         stack< int>s;
        vector< int>ans(N,-1);
        s.push(INT_MIN);
        int i=N-1;
        while(i>=0){
            if(s.top()==-1){
                ans[i]=-1;
                s.push(arr[i]);
            }else{
            while(s.top()<=arr[i]&&s.top()!=INT_MIN){
                s.pop();
            }
            int t=s.top()==INT_MIN?-1:s.top();
            ans[i]=t;
            s.push(arr[i]);
            }
            i--;
        }
        i=N-1;
         while(i>=0){
            if(s.top()==-1){
                ans[i]=-1;
                s.push(arr[i]);
            }else{
            while(s.top()<=arr[i]&&s.top()!=INT_MIN){
                s.pop();
            }
            int t=s.top()==INT_MIN?-1:s.top();
            ans[i]=t;
            s.push(arr[i]);
            }
            i--;
        }
       
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> arr(N);
        for (int i = 0; i < N; i++) cin >> arr[i];

        Solution obj;
        vector<int> ans = obj.nextGreaterElement(N, arr);
        for (auto &it : ans) {
            cout << it << ' ';
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends