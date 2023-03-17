class trienode{
    public:
    char data;
    trienode*arr[26];
    bool isend;
    
    trienode(char d){
       this-> data=d;
        for(int i=0;i<26;i++){
            this->arr[i]=NULL;
        }
        this->isend=false;
    }
};


class Trie {
public:
    trienode* root;
    Trie() {
        root=new trienode('\0');
        
    }
    
    void insert1(string word,trienode*root,int i){
    if(word[i]=='\0'){
        root->isend=true;
        return;
    }
    
    int c=word[i]-'a';
    trienode* temp;
    if(root->arr[c]!=NULL){
        
        temp=root->arr[c];
    }else{
        root->arr[c]= new trienode(word[i]);
        temp=root->arr[c];
    }
    insert1(word,temp,i+1);
}
    bool search1(string word,int i,trienode*root){
         if(word[i]=='\0'){
       
        return root->isend;
    }
        int t=word[i]-'a';
        if(root->arr[t]==NULL){
            return false;
        }
        return search1(word,i+1,root->arr[t]);
        
    }
    bool search2(string word,int i,trienode*root){
         if(word[i]=='\0'){
       
        return true;
    }
        int t=word[i]-'a';
        if(root->arr[t]==NULL){
            return false;
        }
        return search2(word,i+1,root->arr[t]);
        
    }
    void insert(string word) {
        insert1(word,root,0);
    }
    
    bool search(string word) {
        
        return search1(word,0,root);
    }
    
    bool startsWith(string prefix) {
        return search2(prefix,0,root);
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */