class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode*cur=head;
        if(head==NULL)
            return head;
        ListNode*prev=NULL;
        ListNode*next;
        if(head->next!=NULL)
            next=cur->next;
        while(cur){
            cur->next=prev;
            prev=cur;
            cur=next;
            if(next!=NULL)
                next=next->next;
        }
        return prev;
    }
};