class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        set<vector<int>>st;
        sort(nums.begin(),nums.end());
int size=nums.size();
        for(int i=0;i<size;i++){
            int s=i+1;
            int e=size-1;
            while(s<e){
             int sum=nums[i]+nums[s]+nums[e];
           if(sum==0){
            st.insert({nums[i],nums[s],nums[e]});
            s++;
            e--;
                        }else if(sum<0){
                            s++;
                        }else{
                            e--;
                        }
            }
         
        }
for(auto z:st){
    ans.push_back(z);
}
return ans;
    }
};