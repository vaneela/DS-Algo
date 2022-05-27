#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll sum(int arr[], int n){
    if(n==0){
        return 0;
    }else if(n==1){
        return arr[0];
    }else {
        return arr[0] + sum(arr+1,n-1);
    }
}
void solve(){
    int n;
    cin >> n;
    int arr[n];
    for(int i =0;i< n; i++){
        cin >> arr[i];
    }
    cout << "Sum is " << sum(arr,n) << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}