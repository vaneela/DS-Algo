class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        if(nums.size() < 3)
            return 0;
        sort(nums.begin(),nums.end());
        int i,j;
        int ans =0;
        int k=nums.size()-1;
        while(k>1){
            i =0;
            j =k-1;
            while(i < j){
                if(nums[i] +nums[j] > nums[k]){
                    ans+=(j-i);
                    j--;
                }else
                    i++;
            }
            k--;
        }
        return ans;
    }
};