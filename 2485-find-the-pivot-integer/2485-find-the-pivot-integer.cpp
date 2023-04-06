class Solution {
public:
    int pivotInteger(int n) {
        if(n==1){
            return 1;
        }
        int sum=0;
        for(int i=0;i<=n;i++){
            sum+=i;
        }
        //cout<<sum;
        int i=0;
        int sum2=0;
        while(i<n){
            sum2+=i;
            if(sum-sum2+i==sum2){
                return i;
            }
           i++; 
        }
        return -1;
        
    }
};