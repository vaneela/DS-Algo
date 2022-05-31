#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll power(int a,int b){
    if(b==0){
        return 1;
    }
    if(b==1) return a;
    ll ans = power(a,b/2);
    if(b%2==0)
        return ans * ans;
    else 
        return a * ans * ans;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        cout << a << "^" << b << " = " << power(a,b);
    }
    return 0;
}
