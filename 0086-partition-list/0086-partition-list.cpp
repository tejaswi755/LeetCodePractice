/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL||head->next==NULL){
            return head;
        }
        ListNode*head1=NULL;
        ListNode*tail=NULL;
        ListNode* next=NULL;
        ListNode*prev=head;
        ListNode*temp=head;
        
        while(temp!=NULL&&temp->val<x){
            if(tail==NULL){
                head1=temp;
                tail=head1;
                temp=temp->next;
                head=temp;
            }else{
                tail->next=temp;
                tail=temp;
                temp=temp->next;
                head=temp;
            }
        }
        while(temp!=NULL){
            next=temp->next;
            if(temp->val<x){
                if(tail==NULL){
                   
                    head1=temp;
                    tail=head1;
                    temp=next;
                    prev->next=temp;
                }else{
                    tail->next=temp;
                    tail=temp;
                    temp=next;
                    prev->next=temp;
                }
            }else{
               prev=temp;
            temp=temp->next; 
            }
            
        }
        
        if(tail==NULL){
            return head;
        }
        if(head!=NULL){
            tail->next=head;
        }
        
        return head1;
    }
};