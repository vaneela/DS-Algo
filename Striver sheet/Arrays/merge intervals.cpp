class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        pair<int,int>cur ={intervals[0][0],intervals[0][1]};
    
        vector<vector<int>>ans;
        for(int i=0 ; i< intervals.size(); i++){
            if(cur.second>=intervals[i][0]){
                cur.second = max(cur.second,intervals[i][1]);
            }else{
                ans.push_back({cur.first,cur.second});
                cur.first=intervals[i][0];
                cur.second = intervals[i][1];
            }
        }
        ans.push_back({cur.first,cur.second});
        return ans;
    }
};