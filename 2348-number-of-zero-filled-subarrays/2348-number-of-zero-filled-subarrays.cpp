class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
    int size=nums.size();
        int zero=0;
        long long ans=0;
        for(int i=0;i<size;i++){
            if(nums[i]!=0){
                zero=0;
            }else{
                ans=ans+1+zero;
                zero++;
            }
            
            
        }
        return ans;
        
    }
};