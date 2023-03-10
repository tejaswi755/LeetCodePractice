class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        
        map<int,int>mp;
        vector<int>flag;
        int size=nums.size();
        int ans=0;
        int temp=0;
        for(int i=0;i<size;i++){
            temp+=nums[i];
            flag.push_back(temp);
        }
        
        
        for(int i=0;i<size;i++){
            if(flag[i]%k==0){
                if(mp[0]){
                    ans=ans+1+mp[0];
                }else{
                    ans=ans+1;
                }
                
                mp[0]++;
            }else{
                if(flag[i]>0){
                    int t=flag[i]%k;
                    if(mp[t]){
                        ans=ans+mp[t];
                      
                    }
                    mp[t]++;
                    
                }else{
                    int t=flag[i]%k+k;
                     if(mp[t]){
                        ans=ans+mp[t];
                      
                    }
                    mp[t]++;
                }
            }
        }
        return ans;
        
    }
};