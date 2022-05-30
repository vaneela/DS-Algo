#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool isPowerOfThree(int n) {
    if(n==1){
            return true;
        }
        if(n%3!=0){
            return false;
        } if(n==0){
            return false;
        }else{
            return isPowerOfThree(n/3);
        }
    }
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << isPowerOfThree(n)<< endl;
    }
    return 0;
}