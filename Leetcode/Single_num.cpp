int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();++i){
            // nums[i]^=nums[i+1];
            ans^= nums[i];
        }
        return ans;
    }