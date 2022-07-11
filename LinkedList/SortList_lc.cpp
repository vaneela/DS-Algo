class Solution {
public:
 
ListNode *merge(ListNode *h1, ListNode *h2)
{
    // Write your code here
    ListNode *h = NULL;
    ListNode *t = NULL;
    if (h1 == NULL)
    {
        return h2;
    }
    else if (h2 == NULL)
        return h1;
    if (h1->val < h2->val)
    {
        h = h1;
        t = h1;
        h1 = h1->next;
    }
    else if (h2 != NULL)
    {
        h = h2;
        t = h2;
        h2 = h2->next;
    }
    while (h1 != NULL && h2 != NULL)
    {
        if (h1->val < h2->val)
        {
            t->next = h1;
            t = t->next;
            h1 = h1->next;
        }
        else
        {
            t->next = h2;
            t = t->next;
            h2 = h2->next;
        }
    }
    if (h1 != NULL)
        t->next = h1;
    else if (h2 != NULL)
        t->next = h2;
    return h;
}
ListNode * midLL(ListNode*head){
    
    ListNode*fast=head->next;
    ListNode*slow=head;
    while(fast!=NULL && fast->next !=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
ListNode *mergeSort(ListNode *head)
    
{	 
    	if(head==NULL || head->next ==NULL)
        return head;
    ListNode * mid= midLL(head);
 	ListNode * head1=mid->next;
 	mid->next =NULL;
    
	//Write your code here
   
    // Node * newhead=mid;
   	ListNode* left= mergeSort(head);
    ListNode * right=mergeSort(head1);
    ListNode * ans= merge(left,right);
    return ans;
}
    ListNode* sortList(ListNode* head) {
        return mergeSort(head);
    }
};