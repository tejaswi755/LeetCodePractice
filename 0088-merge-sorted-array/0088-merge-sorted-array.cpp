class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int s1=m-1;
        int s2=n-1;
        int s=m+n-1;
while(s2>=0){
    
    if(s1<0||nums2[s2]>=nums1[s1]){
        nums1[s--]=nums2[s2--];
    }else{
        
        nums1[s--]=nums1[s1--];
        
    }
    
    
    
    
    
}    
        
    }
};