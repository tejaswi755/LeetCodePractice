class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        map<int,bool>col;
        map<int,bool>r;
       
        int size=matrix.size();
        int size1=matrix[0].size();
        
        for(int i=0;i<size;i++){
            for(int j=0;j<size1;j++){
                if(matrix[i][j]==0){
                    r[i]=true;
                    col[j]=true;
                }
            }
        }
        
      
        for(int i=0;i<size;i++){
            for(int j=0;j<size1;j++){
                if(col[j]==true){
                    matrix[i][j]=0;
                }
                if(r[i]==true){
                    matrix[i][j]=0;
                }
                
            }
        }
    }
};