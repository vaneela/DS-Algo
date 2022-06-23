int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>m;
        int ans;
        for(int i: nums)
            m[i]++;
        for(auto i:m){
            if(i.second>1){
                ans= i.first;
                break;
}        }
        return ans;
    }
