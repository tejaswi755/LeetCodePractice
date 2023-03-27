class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        vector<int>p;
        vector<int>n;
        int size=nums.size();
        
        for(int i=0;i<size;i++){
            if(nums[i]<0){
                n.push_back(nums[i]);
            }else{
                p.push_back(nums[i]);
            }            
        }
        
       int i=0;
        int j=0;
        while(i<size/2){
            nums[j]=p[i];
            j++;
            nums[j]=n[i];
            j++;
            i++;
        }
        return nums;
        
    }
};