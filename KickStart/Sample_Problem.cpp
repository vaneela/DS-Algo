#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define ii pair<int,int>

using namespace std;
// void solve(){
    
// }
int main(){
    int t;
    cin >> t;
    for(int x=1;x<=t;++x){
        int n,m;
        ll sum=0;
        cin >> n >> m;
        while(n--){
            int temp;
            cin >> temp;
            sum += temp;
        }
        cout << "Case #" << x << ": " << sum%m << endl; 
    }
    return 0;
}