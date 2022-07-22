class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i : nums)
            mp[i]++;
        int ans= 0, ind = 0;
        for(auto i : mp){
            if(i.second > ind){
                ind = i.second;
                ans = i.first;
            }
            }        
        return ans;
    }
};