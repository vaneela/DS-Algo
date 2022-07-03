class Solution {
public:
    int sum(vector<int> &arr){
        int ans=0;
        for(int i:arr)
            ans+=i;
        return ans;
    }
    int maximumWealth(vector<vector<int>>& ac) {
        int ans =-1;
        for(auto v:ac){
            int sm =  sum(v);
            ans=max(sm,ans);
        }
        return ans;    
    }
};