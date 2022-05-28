#include<bits/stdc++.h>
#define ll long long
using namespace std;
int missingNumber(vector<int>& nums) {
        long long sum = nums.size()*(nums.size()+1)/2;
        long long s=0;
        for(auto i : nums){
            s+= i;
        }
        return sum-s;
    }
int main(){
   
   int n;
   cin >> n;
   vector<int>v(n);
   for(int i=0;i<n;i++){
   cin >> v[i];
   }
   cout << "Missing num is " << missingNumber(v);
    return 0;
}