class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>>pq;
        for(auto i : arr){
            int dif = abs(x-i);
            if(pq.size()  < k)
                pq.push({dif,i});
            else{
                if(pq.top().first dif){
                    pq.pop();
                    pq.push({dif,i});

                }
            }
        }
        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};