class Solution {
public:
    double average(vector<int>& salary) {
        double ans;
        int maxs= *max_element(salary.begin(),salary.end());
        int mins= *min_element(salary.begin(),salary.end());
        long long sum=0;
        for(auto i:salary){
            if(i!=maxs && i!=mins)
                sum+=i;
        }
        cout << maxs <<" " << mins << " ";
        ans=(double)sum/(salary.size()-2);
        return ans;
    }
};