#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long evenSumTillN(int n) {
    // Write your code here.
    if(n==0){
        return 0;
    }else{
        if(n%2==0){
            return n+evenSumTillN(n-1);
        }else{
            return evenSumTillN(n-1);
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << evenSumTillN(n)<< endl;
    }
    return 0;
}