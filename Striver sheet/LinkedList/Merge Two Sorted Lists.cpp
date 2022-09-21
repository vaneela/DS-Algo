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
    void merge(ListNode* h1, ListNode * h2,ListNode * & ans){
        ListNode *temp=NULL;
        while(h1 && h2){
            if(h1->val < h2->val){
                if(ans == NULL){
                    ans = h1;
                    temp = ans;
                }
                else{
                    temp->next = h1;
                    temp = temp->next;
                }
                h1= h1->next;
            }else{
                if(ans == NULL){
                    ans = h2;
                    temp = h2;
                }
                else{
                    temp->next = h2;
                    temp = temp ->next;
                }
                h2=h2->next;
            }
        }
        while(h1){
            temp->next =h1;
            h1=h1->next;
            temp=temp->next;
        }
       while(h2){
            temp->next =h2;
            h2=h2->next;
            temp=temp->next;
        }
    
    }
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode * ans = NULL;
        if(list1==NULL)
            return list2;
        else if(list2==NULL)
            return list1;
        merge(list1,list2,ans);
        return ans;
    }
};