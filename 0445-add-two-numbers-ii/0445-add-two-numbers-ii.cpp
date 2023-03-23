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
    ListNode* reverse(ListNode*l){
        ListNode*prev=NULL;
        ListNode* curr=l;
        ListNode*nex=NULL;
        while(curr!=NULL){
            nex=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
        }
        return prev;
        
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1=reverse(l1);
        l2=reverse(l2);
        
        ListNode* head=NULL;
        ListNode* tail=NULL;
        int c=0;
        while(l1!=NULL&&l2!=NULL){
            int t=l1->val+l2->val+c;
            int r=t%10;
            ListNode*temp=new ListNode(r);
            if(tail==NULL){
                head=temp;
                tail=head;
            }else{
                tail->next=temp;
                tail=temp;
            }
            c=t/10;
            l1=l1->next;
            l2=l2->next;
            
        }
         while(l1!=NULL){
            int t=l1->val+c;
            int r=t%10;
            ListNode*temp=new ListNode(r);
            if(tail==NULL){
                head=temp;
                tail=head;
            }else{
                tail->next=temp;
                tail=temp;
            }
            c=t/10;
            l1=l1->next;
           
            
        }
         while(l2!=NULL){
            int t=l2->val+c;
            int r=t%10;
            ListNode*temp=new ListNode(r);
            if(tail==NULL){
                head=temp;
                tail=head;
            }else{
                tail->next=temp;
                tail=temp;
            }
            c=t/10;
           
            l2=l2->next;
            
        }
        if(c!=0){
            ListNode*temp=new ListNode(c);
            tail->next=temp;
                tail=temp;
        }
        head=reverse(head);
        return head;
    }
};