// O(n) time
class Solution {
public:
    vector<int> twoSum(vector<int>& v, int x) {
        vector<int>ans(2);
        for(int i=0;i<v.size()-1;i++){
            auto it = find(v.begin()+i+1,v.end(),x-v[i]);
            if(it!=v.end()){
                ans[0]=i;
                ans[1]= it-v.begin();
                break;
            }
        }
        return ans;
    }
};
