class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>ans;
        int cursum=nums[0];
        ans.push_back(cursum);
        for(int i=1;i<nums.size();i++){
            cursum+=nums[i];
            ans.push_back(cursum);
        }
        return ans;
        
    }
};