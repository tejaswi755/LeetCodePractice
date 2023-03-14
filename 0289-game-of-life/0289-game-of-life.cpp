class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        vector<vector<int>>v=board;
        int s1=board.size();
        int s2=board[0].size();
        for(int i=0;i<s1;i++){
        for(int j=0;j<s2;j++){
                int count=0;
                if(i>0){
                    if(v[i-1][j]==1){
                        count++;
                    }
                    
                }
            if(i<s1-1){
                 if(v[i+1][j]==1){
                        count++;
                    }
            }
            
            if(j>0){
                 if(v[i][j-1]==1){
                        count++;
                    }
            }
            if(j<s2-1){
                 if(v[i][j+1]==1){
                        count++;
                    }
            }
            if(i>0&&j>0){
                 if(v[i-1][j-1]==1){
                        count++;
                    }
            }
            
            if(i>0&&j<s2-1){
                if(v[i-1][j+1]==1){
                        count++;
                    }
            }
            
            if(i<s1-1&&j>0){
                if(v[i+1][j-1]==1){
                        count++;
                    }
            }
             
            if(i<s1-1&&j<s2-1){
                 if(v[i+1][j+1]==1){
                        count++;
                    }
            }
          //  cout<<count<<" ";
            
            if(v[i][j]==1&&(count==2||count==3)){
                board[i][j]=1;
            }else{
                board[i][j]=0;
            }
            if(v[i][j]==0&&count==3){
                board[i][j]=1;
            }
            }
            
        }
        
          
    }
};