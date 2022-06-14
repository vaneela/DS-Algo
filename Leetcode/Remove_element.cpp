#include<bits/stdc++.h>
#define ll long long
using namespace std;
int removeElement(vector<int>& nums, int val) {
        int s =0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val)
            {
                nums[s]=nums[i];
                ++s;
            }
        }
        return s;
    }
int main(){

    return 0;
}