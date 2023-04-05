class Solution {
public:
    string minWindow(string s, string t) {
        int size=s.size();
    int mini=0;
    int maxi=size;
        string sol="";
        map<char,int>mp;
        for(auto i:t){
            mp[i]++;
        }
      int i=0;
        int j=0;
        
        int disc=mp.size();
        //cout<<disc;
        
        while(j<size){
            if(mp.find(s[j])!=mp.end()){
                mp[s[j]]--;
                if(mp[s[j]]==0){
                    disc--;
                }
            }
                while(disc==0){
                    if((j-i)<(maxi-mini)){
                        
                        cout<<i<<" "<<j<<endl;
                        maxi=j;
                        mini=i;
                    }
                if(mp.find(s[i])!=mp.end()){
                mp[s[i]]++;
                    
                if(mp[s[i]]==1){
                    disc++;
                }
            }
                    i++;
                }
                        
            
            j++;
            
        }
       // cout<<mini<<" "<<maxi;
        if(maxi==size){
            return sol;
        }
        while(mini<size&&mini<=maxi){
            sol=sol+s[mini];
            mini++;
        }
        
       return sol; 
        
        
    }
};