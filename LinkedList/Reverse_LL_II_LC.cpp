class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* l=head;
        ListNode* r=head;

        int c=1;
        ListNode*h1=head;
        while(c!=left){
            h1=l;
            l=l->next;
            ++c;
        }
        c=1;
        while(c!=right){
            r=r->next;
            ++c;
        }
        ListNode*tail=r->next;
        ListNode* prev=NULL;
        ListNode*curr=l;
        ListNode* next=curr->next;
        while(curr!=tail){
            curr->next=prev;
            prev=curr;
            curr=next;
            if(next!=NULL)
                next=next->next;
        }
        ListNode*tailf=prev;
        while(tailf->next!=NULL){
            tailf=tailf->next;
        }

        cout << tailf->val <<" "<< h1->val << " ";
        h1->next=prev;
        tailf->next=tail;
        if(left==1)
        return prev;
        return head;
        
        
    }
};