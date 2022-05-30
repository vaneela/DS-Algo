#include<bits/stdc++.h>
#define ll long long
using namespace std;
 void rev(vector<char> & s,vector<char>::iterator it,int n){
        if(n<2){
            return;
        }else{
            swap(*it,*(it+n-1));
            rev(s,++it,n-2);
        }
    }
    void reverseString(vector<char>& s) {
        rev(s,s.begin(),s.size());
    }
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<char>s(n);
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
         reverseString(s);
        for(auto i:s){
            cout << i;
        }cout << endl;
        
    }
    return 0;
}