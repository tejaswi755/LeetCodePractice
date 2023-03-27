class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        next_permutation(nums.begin(),nums.end());
//         int size=nums.size()-1;
//           int index;
//         int i=size-1;
//         while(i>=0&&(nums[i]>=nums[i+1])){
//             i--;
//         }
//       cout<<i;
//         if(i>=0){

            
//             for(int z=size;z>=0;z--){
                
//                 if(nums[z]>nums[i]){
//                     index=z;
                   
//                     break;
//                 }
               
//             }
//              swap(nums[i],nums[index]);
//         }
//         i++;
//        reverse((nums.begin()+i),nums.end());
    }
};