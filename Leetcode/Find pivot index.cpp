class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        // if(nums.size()==1){
        //     if(nums[0]==0)
        //         return 0;
        //     else
        //         return -1;
        // }
        long long sum=0;
        for(int i :nums)
            sum+=i;
        long long lsum=0,rsum=sum;
        int i=0;
        while(i< nums.size()){ 
            rsum-=nums[i];
            if(lsum == rsum)
                return i;
            lsum+=nums[i];
            i++;
        }
//         i=0;j=nums.size()-1;
//         lsum=sum-nums[nums.size()-1];rsum=0;
        
//         while(i< j){
//             // 1 -1 2 lsum=0, rsum = 1 
//             if(lsum == rsum)
//                 return j;
//             // lsum=nums[i];
//             // rsum+=nums[i+1];
//             rsum+=nums[j];
//             lsum-=nums[j-1];
//             j--;
//         }
        return -1;
    }
};