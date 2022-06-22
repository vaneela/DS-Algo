vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            // auto it = find(nums.begin()+i+1,nums.end(),nums[i]);
            // if(it!=nums.end()){
            //     if(find(ans.begin(),ans.end(),nums[i])==ans.end())
            //         ans.push_back(nums[i]);
            // }
            m[nums[i]]++;
        }
        for(auto i:m){
            if(i.second==2)
                ans.push_back(i.first);
        }
        // sort(ans.begin(),ans.end());
        return ans;
    }