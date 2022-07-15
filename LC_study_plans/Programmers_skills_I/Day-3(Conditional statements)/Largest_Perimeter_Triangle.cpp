class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(),nums.end());
        for(int i=nums.size()-1;i>1;i--){
            if(nums[i]<(nums[i-1]+nums[i-2]))
                return nums[i-1]+nums[i-2]+nums[i];
        }
        return ans;
    }
};