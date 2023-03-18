class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string,vector<string>>m;
        vector<vector<string>>ans;
        int size=strs.size();
        
        for(int i=0;i<size;i++){
            string s=strs[i];
            sort(s.begin(),s.end());
            m[s].push_back(strs[i]);
        }
        
        for(auto i:m){
            ans.push_back(i.second);
        }
        
        
        
    return ans;
    }
};