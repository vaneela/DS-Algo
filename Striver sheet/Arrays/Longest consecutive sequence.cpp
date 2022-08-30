class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,bool>mp;
        for(auto i :nums){
            mp[i]=1;
        }
        int h,mx=0;
        for(int i=0;i<nums.size();i++){
            int temp = nums[i];
            h=0;
            if(mp[temp]){
                int cur = temp;
                do{
                    if(mp[temp]){
                        h++;
                        mp[temp]=0;  
                        temp--;
                    }
                    else
                        break;
                }while(1);
                temp =cur+1;
                do{
                    if(mp[temp]){
                        h++;
                        mp[temp]=0;
                        temp++;
                    }else
                        break;
                }while(1);
                
            }
            mx =max(mx,h);
        }
        return mx;
    }
};