/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    void change_sign(ListNode * head){
        while(head){
            head->val*=-1;
            head = head->next;
        
        }
    }
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//         unordered_set<ListNode*>st;
//         while(headA || headB){
//             if(headA)
//                 st.insert(headA);
//             if(headA)
//             headA=headA->next;
//             if(st.find(headB)!= st.end())
//                 return headB;
//             if(headB)
//                 st.insert(headB);
//             if(headB)
//             headB=headB->next;
//                 if(st.find(headA)!=st.end())
//                 return headA;
            
//         }
//         return NULL;
        change_sign(headA);
        ListNode* ans=NULL;
        while(headB){
            if(headB->val < 0){
                ans = headB;
                break;
            }
            headB= headB->next;
        }
        change_sign(headA);
        return ans;
    }
};