class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    int slow=0;
        int fast=0;
        
        
    while(true){
        slow=nums[slow];
        fast=nums[nums[fast]];
        if(slow==fast){
            break;
        }
    }
        
        
        slow=0;
        
         while(true){
        slow=nums[slow];
        fast=nums[fast];
        if(slow==fast){
            break;
        }
    }
        
        
        return slow;
    }
};