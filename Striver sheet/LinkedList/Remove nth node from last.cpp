class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* temp= new ListNode();
        temp->next=head;
        ListNode*fast = temp;
        ListNode*slow=temp;
        // fast->next=head;
        // slow->next=head;
        for(int i=0;i<n;i++)
            fast=fast->next;
        while(fast->next){
            fast=fast->next;
            slow=slow->next;
        }
        slow->next=slow->next->next;
        return temp->next;
    }
};