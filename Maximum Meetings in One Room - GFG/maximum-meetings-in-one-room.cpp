//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class node{
    public:
    int index;
    int start;
    int end;
    
    node(int index,int start,int end){
        this->index=index;
        this->start=start;
        this->end=end;
    }
};
class Solution{
public:
 static bool cmp(node* a , node* b){
        return a->end<b->end;
        }
    vector<int> maxMeetings(int N,vector<int> &S,vector<int> &F){
       vector<node*>v;
       // int count=1;
        int prev;
        vector<int>ans;
        for(int i=0;i<N;i++){
            node* t=new node(i,S[i],F[i]);
            v.push_back(t);
        }
        sort(v.begin(),v.end(),cmp);
        prev=v[0]->end;
        ans.push_back(v[0]->index+1);
        for(int i=1;i<N;i++){
            if(v[i]->start>prev){
                ans.push_back(v[i]->index+1);
                prev=v[i]->end;
            }
        } 
        sort(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> S(n),F(n);
        for(int i=0;i<n;i++){
            cin>>S[i];
        }
        for(int i=0;i<n;i++){
            cin>>F[i];
        }
        Solution ob;
        vector<int> ans=ob.maxMeetings(n,S,F);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i];
            if(i!=ans.size()-1){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends