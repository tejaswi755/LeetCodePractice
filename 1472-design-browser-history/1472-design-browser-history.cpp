class node{
  public:
    string data;
    node*next;
    node*prev;
    
    node(string data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
        
    }
};
class BrowserHistory {
public:
    node* head;
    BrowserHistory(string homepage) {
        this->head=new node(homepage);
    }
    
    void visit(string url) {
      node *temp=new node(url);
        head->next=temp;
        temp->prev=head;
        head=temp;
        
        
    }
    
    string back(int steps) {
        int i=0;
        
        while(i!=steps&&head->prev!=NULL){
            i++;
            head=head->prev;
        }
        return head->data;
        
    }
    
    string forward(int steps) {
          int i=0;
        
        while(i!=steps&&head->next!=NULL){
            i++;
            head=head->next;
        }
        return head->data;
        
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */