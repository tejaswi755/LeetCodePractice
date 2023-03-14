class Solution {
public:
    int majorityElement(vector<int>& nums) {
//         int temp=0;
         int ans=0;
//         map<int,int>m;
           int size=nums.size();
//         for(int i=0;i<size;i++){
//             if(m[nums[i]]){
//                 m[nums[i]]=m[nums[i]]+1;
//             }else{
//                  m[nums[i]]=1;
//             }
//         }

//        for(auto i:m){
//            if(i.second>temp){
//                temp=i.second;
//                ans=i.first;
//            }
//        }
// return ans;

int element=nums[0];

for(int i=0;i<size;i++){
    if(ans==0){
        element=nums[i];
    }
    if(nums[i]==element){
        ans++;
    }else{
        ans--;
    }
}

    return element;   
    }
};