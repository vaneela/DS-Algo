// class Solution {
// public:
#include<bits/stdc++.h>
using namespace std;
    string reverseWords(string s) {
        stringstream str(s);
        string word,ans="";
        while(str >> word){
            reverse(word.begin(),word.end());
            ans = ans + ' ' + word;
        }
        return ans;
    }
// };
int solve(int l){
    int ans =0;
    for(int i=1;i < l;i++){
        if(l % i ==0){
            ans += l/i;
        }
        
    }
    return ans;
}
int solve(int n, vector< vector<int>>v){
    vector<int>va,vb;
    for(auto ele : a){
        if(ele[2]==1)
    
    }
}
int main(){
    string s;
    // cin >> s;
    int n;
    cin >> n;
    cout << solve(n);
    // cout << reverseWords(s);
}