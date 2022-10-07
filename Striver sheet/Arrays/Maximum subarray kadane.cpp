class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans =0,mx=INT_MIN;
        for(int i=0;i < nums.size();i++){
            ans += nums[i];
            mx= max(ans,mx);
            if(ans <0)
            ans=0;
        }
        return mx;
    }
};