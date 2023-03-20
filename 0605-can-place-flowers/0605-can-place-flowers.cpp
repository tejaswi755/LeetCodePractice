class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size=flowerbed.size();
        if(n==0){
            return true;
        }
         for(int i=0;i<size;i++){
             if(n==0){
                 return true;
             }
             if(flowerbed[i]==0){
                 bool l=true;
                 bool r=true;
                 if(i>0){
                     if(flowerbed[i-1]!=0){
                         l=false;
                     }
                    
                 }
                 
                 if(i<size-1){
                    if(flowerbed[i+1]!=0){
                         r=false;
                     } 
                 }
                 
                 
                 if(l&&r){
                     flowerbed[i]=1;
                     n--;
                 }
                 ///cout<<flowerbed
             }
         }
        
        if(n==0){
            return true;
        }else{
            return false;
        }
    }
};