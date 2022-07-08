class Solution {
public:
    bool nod(int n){
        int ans=0;
        while(n){
            ++ans;
            n/=10;
        }
        
        return !(ans%2);
    }
    int findNumbers(vector<int>& nums) {
        int ans=0;
        for(auto i:nums){
            ans +=nod(i);
        }
        return ans;
    }
};