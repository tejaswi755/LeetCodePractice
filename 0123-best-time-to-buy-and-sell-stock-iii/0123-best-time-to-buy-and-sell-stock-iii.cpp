class Solution {
public:
    int solve(vector<int>&prices,int i,int buy,int trn,vector<vector<vector<int>>>&v){

        if(i>=prices.size()||trn>=2){
            return 0;
        }
        if(v[i][buy][trn]!=-1){
            return v[i][buy][trn];
        }
        
     if(buy){
        return v[i][buy][trn]=max(-prices[i]+solve(prices,i+1,0,trn,v),solve(prices,i+1,1,trn,v));
     }else{
         return v[i][buy][trn]=max(prices[i]+solve(prices,i+1,1,trn+1,v),solve(prices,i+1,0,trn,v));
     }
        
    }
    int maxProfit(vector<int>& prices) {
        int size=prices.size();
        vector<vector<vector<int>>>v(size+1,vector<vector<int>>(2,vector<int>(2,-1)));
        return solve(prices,0,1,0,v);
    }
};