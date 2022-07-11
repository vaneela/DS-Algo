// used vector 12-07-2022 don't know stack (using LL)  yet
class Solution {
public:
    int pairSum(ListNode* head) {
       vector<int>v;
        while(head!=NULL){
            v.push_back(head->val);
            head=head->next;
            
        }
        int sum=0,ans=0,n=v.size();
        for(int i=0;i<n/2;i++){
            sum=v[i]+v[n-i-1];
            ans=max(ans,sum);
        }
        return ans;
    }
};