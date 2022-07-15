class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size(), ze=0, nze=0;
        while(ze<n){
            if(nums[ze]==0)
                ze++;
            else
                swap(nums[ze++],nums[nze++]);
        }
    }
};