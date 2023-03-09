class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        map<int,bool>col;
        map<int,bool>r;
       
        int size=matrix.size();
        int size1=matrix[0].size();
        bool iscol=false;
        int flag=matrix[0][0];
        for(int i=0;i<size;i++){
            if(matrix[i][0]==0){
                iscol=true;
            }
            for(int j=1;j<size1;j++){
                if(matrix[i][j]==0){
                   matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        
      
        for(int i=1;i<size;i++){
            for(int j=1;j<size1;j++){
                if(matrix[i][0]==0||matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
        }
        
   
        if(matrix[0][0]==0){
           
            for(int i=0;i<size1;i++){
               // cout<<matrix[0][i]<<" ";
                matrix[0][i]=0;
             
                //cout<<matrix[0][i]<<endl;
            }
            
        }
        
        if(iscol){
            for(int i=0;i<size;i++){
               
                matrix[i][0]=0;
                
            }
        }
    }
};