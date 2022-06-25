void sortColors(vector<int>& nums) {
        int index =0, n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                int temp =nums[i];
                nums[i]= nums[index];
                nums[index]= temp;
                ++index;
            }
                
        }
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                // swap(nums[i],nums[index++]);
            
                int temp =nums[i];
                nums[i]= nums[index];
                nums[index]= temp;
                 ++index;
            }
        }
    }