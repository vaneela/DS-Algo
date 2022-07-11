class Solution {
public:
    ListNode* rev(ListNode* head){
       ListNode*cur=head;
        ListNode* prev=NULL;
        ListNode*next;
        if(head!=NULL)
            next=head->next;
        while(cur!=NULL){
            cur->next=prev;
            prev=cur;
            cur=next;
            if(next!=NULL)
                next=next->next;
        }
        return prev;
    }
    ListNode* mid(ListNode* head){
        ListNode*fast;
        if(head!=NULL)
            fast=head->next;
        ListNode*slow=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    bool isPalindrome(ListNode* head) {
        ListNode * midi=mid(head);
        ListNode* head2=rev(midi->next);
        // while()
        midi->next=NULL;
        bool ans=1;
        while(head!=NULL && head2!=NULL){
            if(head->val != head2->val){
                ans=0;
                break;
            }
                // return 0;
            head=head->next;
            head2=head2->next;
        }
        return ans;
        
        
    }
};