//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	long long int po(int n,int val,int m){
	    long long int ans=1;
	    int temp=n;
	    while(ans<=m&&temp>0){
	        ans=ans*val;
	        temp--;
	    }
	    return ans;
	}
	int NthRoot(int n, int m)
	{
	    if(m==0){
	    return 0;
	}else if(m==1){
	    return 1;
	}
	
	long long int s=0;
	long long int e=m/n;
	while(s<=e){
	    long long mid=(e-s)/2+s;
	    long long value=po(n,mid,m);
	   // cout<<value<<" ";
	    if(value==m){
	        return mid;
	    }else if(value<m){
	        s=mid+1;
	    }else{
	        e=mid-1;
	    }
	}
	return -1;
	    // Code here.
	   
	}  
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends