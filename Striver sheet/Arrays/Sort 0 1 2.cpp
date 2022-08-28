class Solution {
public:
// dutch national flag algo
    void sortColors(vector<int>& nums) {
        int s =0, mid =0, e =nums.size()-1;
        while(mid <= e){
            if(nums[mid]==0)
                swap(nums[s++],nums[mid++]);
            else if(nums[mid]==1)
                ++mid;
            else
                swap(nums[mid],nums[e--]);
        }
    }
};