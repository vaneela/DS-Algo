class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0,temp=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                temp++;
            }
            if(nums[i]!= 1 || i == (nums.size()-1)){
                ans = max(ans,temp);
                temp =0;
            }
        }
        
        return ans;
    }
};