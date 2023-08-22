//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src){
        // code here
         vector<pair<int,int>>adj[N];
        for(int i=0;i<M;i++){
            int u=edges[i][0];
            int v=edges[i][1];
            
            adj[u].push_back({v,1});
            adj[v].push_back({u,1});
            
        }
        
        vector<int>dis(N,1e9);
        queue<int>q;
        q.push(src);
        dis[src]=0;
        while(!q.empty()){
            int t=q.front();
            q.pop();
            
            for(auto i:adj[t]){
                if(dis[t]+i.second<dis[i.first]){
                    dis[i.first]=dis[t]+i.second;
                    q.push(i.first);
                }
            }
        }
        vector<int>w;
        for(auto i:dis){
            if(i!=1e9){
                w.push_back(i);
            }else{
                w.push_back(-1);
            }
        }
        return w;
        
    }
    
};
 

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        vector<vector<int>> edges;

        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for(int j=0; j<2; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }

        int src; cin >> src;

        Solution obj;

        vector<int> res = obj.shortestPath(edges, n, m, src);

        for (auto x : res){
            cout<<x<<" ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends