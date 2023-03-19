class trienode{
    public:
    char c;
    trienode*arr[26];
    bool isend;
    
    trienode(char ch){
        this->c=ch;
        for(int i=0;i<26;i++){
            this->arr[i]=NULL;
        }
        isend=false;
    }
};
class WordDictionary {
public:
    
    trienode*root;
    WordDictionary() {
        root=new trienode('\0');
    }
    void add(string word,trienode*root,int i){
        if(i==word.size()){
            root->isend=true;
            return;
        }
        
        trienode*temp;
        int t=word[i]-'a';
        if(root->arr[t]!=NULL){
            temp=root->arr[t];
        }else{
            root->arr[t]=new trienode(word[i]);
            temp=root->arr[t];
        }
        add(word,temp,i+1);
        
        
    }
    
    bool search(string word,trienode*root,int i){
        if(i==word.size()){
            return root->isend;
        }
        
     
        if(word[i]=='.'){
            
            for(int j=0;j<26;j++){
                if(root->arr[j]!=NULL&&search(word,root->arr[j],i+1)){
                    return true;
                }
            }
            return false;
            
        }
          int t= word[i]-'a';
            //cout<<2<<" ";
        
            
        trienode* temp;
      //  cout<<t<<" "<<word[i]<<" ";
        if(root->arr[t]!=NULL){
            temp=root->arr[t];
           
        }else{
             return false;
        }
        return search(word,temp,i+1);
        
        
    }
    void addWord(string word) {
        add(word,root,0);
    }
    
    bool search(string word) {
        return search(word,root,0);
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */