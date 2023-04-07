class Solution {
public:
    bool ist(int mid,int h,vector<int>& piles){
      int count=0;
        int siz=piles.size();
        for(int i=0;i<siz;i++){
            if(piles[i]<=mid){
                count++;
            }else{
                double z=piles[i];
                double t=z/mid;
                
                count=count+ceil(t);
                
            }
            if(count>h){
                return false;
            }
             //cout<<count<<" ";
        }
      // cout<<endl;
        if(count<=h){
            return true;
        }else{
            return false;
        }
        
        
        
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        
        
        int maxi=piles[0];
        int size=piles.size();
        for(int i=0;i<size;i++){
            maxi=max(piles[i],maxi);
        }
        //cout<<maxi<<" ";
        int e=maxi;
        int s=1;
        int ans=0;
        while(s<=e){
            int mid=(e-s)/2+s;
           // cout<<mid<<" ";
            if(ist(mid,h,piles)==true){
                ans=mid;
                e=mid-1;
            }else{
                s=mid+1;
            }
        }
        return ans;
        
    }
};