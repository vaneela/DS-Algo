class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>s;
        for(int i : nums)
            s.insert(i);
        auto it = --s.end();
        if(s.size() <3)
            return *it;
        auto ss= --it;
        auto d= --ss;
        
        
        return *d;
    
    }
};