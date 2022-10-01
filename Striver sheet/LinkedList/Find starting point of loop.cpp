/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        // unordered_set<ListNode *>st;
        // while(head){
        //     if(st.find(head) != st.end())
        //         return head;
        //     st.insert(head);
        //     head = head->next;
        // }
        // return NULL;
        ListNode*slow = head;
        ListNode* fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast ->next->next;
            if(fast==slow)
                break;
        }
        if(!fast || !fast->next)
            return NULL;
        slow = head;
        while(slow !=fast){
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
};