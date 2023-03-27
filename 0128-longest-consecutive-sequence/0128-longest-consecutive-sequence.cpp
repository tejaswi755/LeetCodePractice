class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        priority_queue<int>q;
        int size=nums.size();
        if(size==0||size==1){
            return size;
        }
        int ans=INT_MIN;
        int count=1;
        int prev;
        
        for(int i=0;i<size;i++){
            q.push(nums[i]);
          
        }
        prev=q.top();
        q.pop();
       // cout<<prev;
        
        while(!q.empty()){
            int temp=q.top();
           // cout<<temp<<" ";
            q.pop();
             if(temp==prev-1){
                 count++;
                 prev=temp;
               //  cout<<count;
             }else if(temp==prev){
                 
                 
             }else{
                 ans=max(ans,count);
                 count=1;
                 prev=temp;
             }
        }
        ans=max(ans,count);
        return ans;
    }
};