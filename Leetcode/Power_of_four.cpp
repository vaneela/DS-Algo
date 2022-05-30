#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool isPowerOfFour(int n) {
    if(n==1){
            return true;
        }
        if(n%4!=0){
            return false;
        } if(n==0){
            return false;
        }else{
            return isPowerOfFour(n/4);
        }
    }
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << isPowerOfFour(n)<< endl;
    }
    return 0;
}