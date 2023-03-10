class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      vector<int>v=nums;
      vector<int>ans;
sort(v.begin(),v.end());

int s=0;
int e=v.size()-1;
while(s<e){
    int sum=v[s]+v[e];
    if(sum==target){
        break;
    }else if(sum<target){
        s++;
    }else{
        e--;
    }
}

for(int i=0;i<v.size();i++){
      if(nums[i]==v[s]){
          ans.push_back(i);
      }else if(nums[i]==v[e]){
          ans.push_back(i);
      }
}

      return ans;  
    }
};