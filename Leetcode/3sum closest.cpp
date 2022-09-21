class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
     int ans =0;
    long long sum ,diff=INT_MAX;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            int j=i+1,k=nums.size()-1;
            while(j<k){
                sum = nums[i]+nums[j]+nums[k];
                if(sum == target)
                    return target;
                if(abs(sum-target) < diff){
                    diff= abs(sum-target);
                    ans = sum;
                }
                if(sum >target)
                    k--;
                else
                    j++;
            }
        }
        return ans;
    }
};