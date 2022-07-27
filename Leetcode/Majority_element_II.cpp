class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i:nums)
            m[i]++;
        vector<int> ans;
        int x = nums.size()/3;
        for(auto i: m){
            if(i.second > x)
                ans.push_back(i.first);
        }
        return ans;
    }
};