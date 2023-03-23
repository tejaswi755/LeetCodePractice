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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=1;
        ListNode*temp=head;
        
        while(temp->next!=NULL){
            temp=temp->next;
            count++;
            
        }
        
        int i=count-n+1;
        if(i==1){
            return head->next;
        }
        
        ListNode*prev=head;
        ListNode*curr=head;
        int j=1;
        while(j!=i){
            j++;
            prev=curr;
            curr=curr->next;
            
        }
        
        prev->next=curr->next;
        delete(curr);
    return head;
    }
};