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
    ListNode * rev(ListNode * h){
        if(h == NULL)
            return h;
        ListNode*prev = NULL;
        ListNode* cur = h;
        ListNode*next = h->next;
        while(cur){
            cur->next = prev;
            prev = cur;
            cur = next;
            if(next)
                next= next->next;
        }
        return prev;
    
    }
    ListNode * mid(ListNode * h){
        ListNode * slow= h;
        ListNode*fast =h;
        if(h)
            fast = h->next;
        while(fast && fast->next){
            fast = fast->next->next;
            slow=slow->next;
        }
        return slow;
    }
public:
    bool isPalindrome(ListNode* head) {
        ListNode*midd = mid(head);
        ListNode * h1= rev(midd->next);
        while(h1){
            if(head->val!= h1->val)
                return 0;
            head=head->next;
            h1=h1->next;
            
        }
        return 1;
    }
};