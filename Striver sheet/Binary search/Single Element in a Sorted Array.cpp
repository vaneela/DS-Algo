class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int s=0,e = nums.size()-1;
        while(s <= e){
            int mid = s + (e-s)/2;
            if( mid+1>=nums.size() || mid-1< 0)
            return nums[mid];
            // return nums[mid];
            int bfr = nums[mid-1],aft = nums[mid+1];
            int bind = (mid-1)%2,aind=(mid+1)%2 ;
            if(mid!=e)
            { 
                aft=nums[mid+1];
                aind=(mid+1)%2;

            }
            if(nums[mid] == bfr){
                if(bind)
                    e= mid-1;
                else
                    s=mid+1;
            }else if(nums[mid] == aft){
                if(mid%2)
                e=mid-1;
                else
                s=mid+1;
            }else
            return nums[mid];
        }
    return nums[nums.size()-1];
    }
};