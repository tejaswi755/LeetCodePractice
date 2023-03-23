//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        vector<int>ans;
        int s1=0;
        int s2=0;
        if(arr1[0]==arr2[0]){
            ans.push_back(arr1[0]);
            s1++;
            s2++;
        }else if(arr1[0]>arr2[0]){
            ans.push_back(arr2[0]);
            s2++;
        }else{
            ans.push_back(arr1[0]);
            s1++;
        }
        while(s1<n&&s2<m){
            if(arr1[s1]==arr2[s2]){
                if(arr1[s1]>ans.back()){
                    ans.push_back(arr1[s1]);
                    
                }
                s1++;
                    s2++;
                
            }else if(arr1[s1]<arr2[s2]){
                if(arr1[s1]>ans.back()){
                    ans.push_back(arr1[s1]);
                    
                    
                }
                s1++;
            }else{
                if(arr2[s2]>ans.back()){
                    ans.push_back(arr2[s2]);
                   
                    
                }
                 s2++;
            }
        }
        
        while(s1<n){
            if(arr1[s1]>ans.back()){
                ans.push_back(arr1[s1]);
            }
            s1++;
        }
         while(s2<m){
            if(arr2[s2]>ans.back()){
                ans.push_back(arr2[s2]);
            }
            s2++;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends