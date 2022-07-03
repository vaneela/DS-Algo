class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        multiset<int>s;
        for(int i:nums)
            s.insert(i);
        auto it = s.end();
        while(k--){
            --it;
        }
        
        return *it;
    }
};