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
    bool isPalindrome(ListNode* head) {
        if(head==NULL||head->next==NULL){
            return true;
        }
       ListNode* x=head;
        ListNode* x2=head->next;
        
        while(x2->next!=NULL){
            x2=x2->next;
            
            if(x2->next!=NULL){
                x2=x2->next;
               // count++;
            }
            x=x->next;
            
        }
        
        ListNode*prev=NULL;
        ListNode*curr=x->next;
        x->next=NULL;
        ListNode*next=NULL;
        while(curr!=NULL){
            next=curr->next;
         curr->next=prev;
            prev=curr;
            curr=next;
            
        }
        x=head;
        while(x!=NULL&&prev!=NULL){
            if(x->val!=prev->val){
                return false;
            }
            x=x->next;
            prev=prev->next;
        }
 return true;
    }
};