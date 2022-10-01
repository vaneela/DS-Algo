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
    ListNode*rev(ListNode*h){
        if(!h)
            return h;
        ListNode*prev=NULL;
        ListNode*cur = h;
        ListNode*next=h->next;
        while(cur){
            cur->next=prev;
            prev =cur;
            cur=next;
            if(next)
                next=next->next;
        }
        return prev;
    }
    
public:
    ListNode* rotateRight(ListNode* head, int k) {
        int n=0;
        if(k==0 || !head || !head->next)
            return head;
        ListNode*temp=head;
        while(temp){
            ++n;
            temp=temp->next;
        }
        k%=n;
        if(k==0)
            return head;
        head = rev(head);
        ListNode*h1=new ListNode();
        h1->next=head;
        // ListNode*
        temp=h1;
        ListNode*h2=head;
        for(int i=0;i<k;i++){
            temp=temp->next;
            
        }
        h2=temp->next;
        temp->next=NULL;
        h1=rev(h1->next);
        h2=rev(h2);
        temp=h1;
        while(temp && temp->next){
            temp=temp->next;
        }
        if(temp)
        temp->next =h2;
        return h1;
        
        
    }
};