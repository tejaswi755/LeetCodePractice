class Solution {
public:
    int countPairs(vector<int>& deliciousness) {
        
        long long int flag=1e9+7;
        unordered_map<long long int,long long int>mp;
        long long int ans=0;
      
        for(auto i:deliciousness){
            
            for(int j=1;j<=(1<<22);j=j*2){
             
                if(mp[j-i]){
                    ans=ans+mp[j-i];
                    
                }
            }
            
            mp[i]++;
            
            
            
        }
        
        return ans%(int)flag;
        
      
    }
};