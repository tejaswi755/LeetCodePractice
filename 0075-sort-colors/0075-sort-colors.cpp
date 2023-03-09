class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int size=nums.size();
        int z=0;
        int i=0;
        int t=size-1;
        
        while(i<=t){
            
            if(nums[i]==2){
                swap(nums[i],nums[t]);
                t--;
            }else if(nums[i]==0){
                 swap(nums[i],nums[z]);
                z++;
                i++;
            }else{
                i++;
            }
            
            
            
        }
        
    }
};