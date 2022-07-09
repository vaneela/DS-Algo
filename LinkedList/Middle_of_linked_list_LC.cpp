//    int size(ListNode *head){
//         int c = 0;
//         while(head!=NULL){
//             c++;
//             head=head->next;
//             }
//         return c;
//     }
//     ListNode* middleNode(ListNode* head) {
//         int n = size(head);
//         int mid = (n%2)?(n/2)+1:n/2 +1;
//         int c =0;
//         --mid;
//         ListNode * temp = head;
        
//         while(c!=mid){
//             temp = temp->next;
//             ++c;
//         }
//         return temp;
//     }


// Fast slow approach

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast = head;
        if(head==NULL)
            return head;
        while(fast !=NULL && fast->next !=NULL  ){
            slow =slow -> next;
            fast = fast->next ->next;
        }
        return slow;
    }
};