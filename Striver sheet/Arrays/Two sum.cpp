class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans(2,-1);
        unordered_map<int,int>mp;
        for(int i =0; i< nums.size(); i++){
            auto it = mp.find(target-nums[i]);
            if(it != mp.end()){
                if(it->second < i){
                    ans[0] =it->second;
                    ans[1]= i;
                    break;
                }else{
                    ans[0]=i;
                    ans[1]=it->second;
                    break;
                }
                    
            }
            mp[nums[i]]=i;
        }
        return ans;
    }
};