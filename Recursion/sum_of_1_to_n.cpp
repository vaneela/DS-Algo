#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll sumofn(int n){
    if(n==0){
        return 0;
    }
    return sumofn(n-1)+n;
}
int main(){
int n;
cin >> n;
cout << sumofn(n);
return 0;
}