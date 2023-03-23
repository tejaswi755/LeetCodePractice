/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    // void solve(Node*head,Node*&tail,Node*&head1){
    //     if(head->next==NULL&&head->child==NULL){
    //         Node*temp= new Node(head->val);
    //         if(tail==NULL){
    //             head1=temp;
    //             tail=head1;    
    //         }else{
    //             tail->next=temp;
    //             tail=temp;
    //         }
    //         return ;
    //     }
    //      Node*temp= new Node(head->val);
    //         if(tail==NULL){
    //             head1=temp;
    //             tail=head1;   
    //         }else{
    //             tail->next=temp;
    //             tail=temp;
    //         }
    //     if(head->child!=NULL){
    //         solve(head->child,tail,head1);
    //     }
    //     if(head->next!=NULL){
    //         solve(head->next,tail,head1);
    //     }     
    // }
    
    Node* flatten(Node* head) {
        if(head==NULL){
            return head;
        }
    Node*tail=head;
        stack<Node*>s;
        while(true){
            if(tail->child!=NULL){
                if(tail->next!=NULL){
                    s.push(tail->next);
                    
                }
                
                tail->next=tail->child;
                tail->child->prev=tail;
                tail->child=NULL;
                tail=tail->next;
            }else{
                if(tail->next!=NULL){
                    tail=tail->next;
                }else{
                    if(s.empty()){
                        break;
                    }
                    Node*temp=s.top();
                    s.pop();
                    tail->next=temp;
                    temp->prev=tail;
                    tail=temp;
                }
                
            }
            
        }
        return head;
        
    }
};