//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int ans=0;
	    int row=-1;
	    for(int i=0;i<n;i++){
	        int s=0;
	        int e=m-1;
	         int c=-1;
	        while(s<=e){
	           // cout<<"start"<<s<<" end"<<e<<" ";
	            int mid=(s+e)/2;
	           
	            //cout<<mid<<" ";
	            if(arr[i][mid]==1){
	                c=mid;
	                e=mid-1;
	            }else{
	                s=mid+1;
	            }
	        }
	        
	        if(c!=-1){
	            
	            if(m-c>ans){
	               // cout<<m-c<<" ";
	                ans=m-c;
	                row=i;
	                //cout<<ans<<row<<endl;
	            }
	        }
	       
	        
	    }
	    return row;
	}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends