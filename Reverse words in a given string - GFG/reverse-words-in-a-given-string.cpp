//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        string temp="";
        string ans="";
        int i=S.size();
        while(i>=0){
            if(S[i]=='.'){
                ans=ans+temp;
                ans.push_back('.');
                
                temp="";
               
            }else{
                temp=S[i]+temp;
            }
            i--;
        }
        if(temp!=""){
             ans=ans+temp;
        }
        return ans;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends