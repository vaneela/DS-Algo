class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end());
        int sum=0,c=1, n=cost.size();
        for(int i=cost.size()-1;i>-1;i--){
            if(i== (n-3*c)){
                c++;
            }else
            sum+=cost[i];
            
        }
      
        return sum;
    }
};