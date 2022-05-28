#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    string str;
    cin >> str;
    map<char,int>m;
    for(int i=0;i<str.size();i++){
        m[str[i]]++;
    }
    
    bool ans = false;
    // cout << str.size() << " ";
    for(int i=0;i<str.size();i++){
        
        if(m[i+48]==str[i]-48){
            ans = true;

        }else{
            ans = false;
            break;
        }
    }
    if(ans){
        cout << "true";
    }else{
        cout << "false";
    }
}
int main(){
    int t=1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}