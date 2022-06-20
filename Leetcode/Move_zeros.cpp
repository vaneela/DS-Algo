void moveZeroes(vector<int>& nums) {
        int z=0;
        int n=nums.size();
        for(int i:nums){
            if(i==0)
                z++;
        }
        int c =-1;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums[++c]=nums[i];
            }
        }
        for(int i=c+1;i<n;i++)
            nums[i]=0;
    }