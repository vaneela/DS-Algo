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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry =0;
        ListNode* ans =NULL;
        ListNode *head;
        ListNode * temp;
        while(l1 || l2){
            int sum = carry ;
            if(l1)
            sum+=l1->val;
            if(l2)
            sum+= l2->val;
            carry = sum/10;
            sum %=10;
          temp = new ListNode(sum);
            if(ans == NULL){
                ans = temp;
                head = ans;
            }else{
                ans->next=temp;
                ans = ans->next;
}           if(l1) 
            l1=l1->next;
            if(l2)
            l2=l2->next;
        }
        if(carry){
            ListNode * temp = new ListNode(carry);
            ans->next = temp;

        }
        return head;
    }
};