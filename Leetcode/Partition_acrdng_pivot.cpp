class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> sml,lrg, ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot)
                sml.push_back(nums[i]);
            else if(nums[i] > pivot)
                lrg.push_back(nums[i]);
        }
        int size = sml.size();
        for(int i =0;i<size;i++){
            ans.push_back(sml[i]);
        }
        size= nums.size()-(sml.size() + lrg.size());
        while(size--)
            ans.push_back(pivot);
        size = lrg.size();
        for(int i =0;i<size;i++)
            ans.push_back(lrg[i]);
        return ans;
    }
};