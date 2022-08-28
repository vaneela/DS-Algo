class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int bpoint =-1, nepoint=-1;
        for(int i= nums.size()-2; i>-1; i--){
            if(nums[i] < nums[i+1]){
                bpoint =i;
                break;
            }
        }
        if(bpoint == -1){
            reverse(nums.begin(),nums.end());
            return;
        }
        
        for(int i= nums.size()-1; i>-1; i--){
            if(nums[i] > nums[bpoint]){
                nepoint = i;
                break;
            }
        }
        swap(nums[bpoint],nums[nepoint]);
        reverse(nums.begin()+bpoint+1,nums.end());
        
        
    }
};