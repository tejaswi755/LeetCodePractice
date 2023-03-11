class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
       int sum=0;
        int n=cardPoints.size();
        for(int i=0;i<n;i++){
            sum=sum+cardPoints[i];
        }
        
        int window=n-k;
        
        int ws=0;
        for(int i=0;i<window;i++){
            ws+=cardPoints[i];
        }
       
        int ans=sum-ws;
        int i=window;
        while(i<n){
            ws=ws+cardPoints[i]-cardPoints[i-window];
            //cout<<ws;
            ans=max(ans,sum-ws);
            i++;
        }
        
       
        return ans;
    }
};