class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>arr;
        
        int size=nums.size();
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<size-1;i++){
            
            if(nums[i]==nums[i+1]){
                arr.push_back(nums[i]);
            }
            
            
        }
        return arr;
    }
};