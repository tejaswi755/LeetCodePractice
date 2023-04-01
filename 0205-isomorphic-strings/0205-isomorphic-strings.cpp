class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        map<char,char>mp;
        int z=s.size();
        int i=0;
        while(i<z){
            if(mp.find(t[i])==mp.end()){
                mp[t[i]]=s[i];
            }else{
                if(mp[t[i]]!=s[i]){
                    return false;
                }
            }
            i++;
        }
        mp.clear();
        i=0;
         while(i<z){
            if(mp.find(s[i])==mp.end()){
                mp[s[i]]=t[i];
            }else{
                if(mp[s[i]]!=t[i]){
                    return false;
                }
            }
            i++;
        }
        return true;
    }
};