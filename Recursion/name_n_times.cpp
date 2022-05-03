#include<bits/stdc++.h>
#define ll long long
using namespace std;
void print(int n){
    if(n==0){
        return;
    }
    cout << "ok\n";
    
    print(n-1);
    
}
int main(){
int n;
cin >> n;
print(n);
return 0;
}