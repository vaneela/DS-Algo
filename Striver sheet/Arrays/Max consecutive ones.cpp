class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int mx=INT_MIN;
        int c = 0;
        for(int i=0; i< nums.size(); i++){
            if(nums[i] ==1)
            c++;
            else
            c=0;
            mx = max(mx, c);
        }
        return mx;
    }
};