class Solution {
public:
/*
ListNode*slow=head;
        ListNode*fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
                return 1;
        }
        return 0;
*/
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode*>st;
        while(head){
            if(st.find(head) != st.end())
                return 1;
            st.insert(head);
            head = head->next;
        }
        return 0;
    }
};