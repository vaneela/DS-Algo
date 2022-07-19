class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        // if()
        int prev=arr[1]-arr[0];
        for(int i=1;i<arr.size();i++){
            int cur = arr[i]-arr[i-1];
            if(prev!=cur)
                return 0;
        }
        return 1;
    }
};