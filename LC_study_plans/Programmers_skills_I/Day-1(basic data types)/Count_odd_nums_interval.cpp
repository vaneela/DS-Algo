class Solution {
public:
    int countOdds(int low, int high) {
    int ans=0;
        if(!(low%2) && !(high%2)){
            ans=(high-low)/2;
        }else{
            ans= (high-low)/2 +1;
        }

        return ans;
    }
};