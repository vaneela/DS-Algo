class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int i : arr)
            ++mp[i];
        int n = arr.size();
        priority_queue<int>pq;
        for(auto ele : mp)
            pq.push(ele.second);
        int x = 0, move=0;
        while(!pq.empty()){
            move++;
            x+=pq.top();
            pq.pop();
            if(x >= n/2)
                break;
        }
        return move;
    }
};