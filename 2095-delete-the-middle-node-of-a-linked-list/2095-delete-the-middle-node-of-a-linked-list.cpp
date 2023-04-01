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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL||head->next==NULL){
            return NULL;
        }
        ListNode*prev=head;
        ListNode*x=head;
        ListNode*x2=head;
        while(x2->next!=NULL){
            x2=x2->next;
            if(x2->next!=NULL){
                x2=x2->next;
            }
            prev=x;
            x=x->next;
            
        }
        
        prev->next=x->next;
        delete(x);
        
        return head;
        
    }
};