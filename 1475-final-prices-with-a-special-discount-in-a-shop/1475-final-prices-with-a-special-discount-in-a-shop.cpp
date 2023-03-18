class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int>ans;
        int size=prices.size();
        for(int i=0;i<size;i++){
            int j=i+1;
            while(j<size&&prices[i]<prices[j]){
                j++;
            }
            
            if(j>=size){
                ans.push_back(prices[i]);
            }else{
                ans.push_back(prices[i]-prices[j]);
            }
        }
        return ans;
        
    }
};