//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
  
    long long int floorSqrt(long long int x) 
    {
        if(x==0){
            return 0;
        }else if(x==1){
            return 1;
        }
        // Your code goes here 
        long long int s=0;
        long long int e=x/2;
        long long int ans=1;
        while(s<=e){
          long long  int mid=(e-s)/2+s;
            if((mid*mid)<=x){
                ans=mid;
                s=mid+1;
            }else{
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
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends