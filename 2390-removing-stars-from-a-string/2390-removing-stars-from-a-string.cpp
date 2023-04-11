class Solution {
public:
    string removeStars(string s) {
        stack<char>s1;
        
        string ans="";
        for(auto i:s){
            if(i!='*'){
                s1.push(i);
            }else{
              if(!s1.empty()){
                    s1.pop();
              }
            }
        }
        
        while(!s1.empty()){
            char c=s1.top();
            s1.pop();
ans.push_back(c);
            
        }
        reverse(ans.begin(),ans.end());
       return ans; 
    }
};