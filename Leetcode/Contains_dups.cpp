 bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>m;
        for(auto i :nums)
            m[i]++;
        for(auto i : m){
            if(i.second>1)
                return 1;
        }
            
        return 0;
    }