class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        bool flag ;
         int n = nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i]<nums[i+1]){
                flag=1;
                break;
            }else if(nums[i]>nums[i+1]){
                flag=0;
                break;
            }
                
        }
        int cnt = 1;
       
        for(int i=0;i<n-1;i++){
            if(flag){
                if(nums[i]<nums[i+1]){
                    cnt++;
                    flag =0;
                }
            }else{
                if(nums[i]>nums[i+1]){
                    cnt++;
                    flag =1;
                }
            }
        }
        return cnt;
    }
};