#include<bits/stdc++.h>
#define ll long long
using namespace std;
 int sum(vector<int>&v , int s , int e){
        int sum=0;
        for(int i=s;i<=e;i++){
            sum += v[i];
        }
        return sum;
    }
        
    vector<int> runningSum(vector<int>& nums) {
        vector<int>ans;
        for(int i =0;i<nums.size();i++){
            int x = sum(nums,0,i);
            ans.push_back(x);
        }
        return ans;
    }

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>v(n);
        
        for(int i=0;i<n;i++){
            cin >> v[i];
        }   
        for(auto i:v){
            cout << i << ' ';
        }
        cout << endl; 
    }
    return 0;
}