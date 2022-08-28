class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans =0, minp= 1e9;
        for(int i=0; i< prices.size(); i++){
            minp = min(prices[i], minp);
            if(minp < prices[i]){
                ans = max(ans, prices[i]- minp);
            }
        }
        return ans;
    }
};