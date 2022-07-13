class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode*slow=head;
        if(head==NULL)
            return 0;
        ListNode*fast=head->next;
        while(fast!=NULL && fast->next!=NULL){
            if(fast==slow)
                return 1;
            fast=fast->next->next;
            slow=slow->next;
        }
        return 0;
    }
};