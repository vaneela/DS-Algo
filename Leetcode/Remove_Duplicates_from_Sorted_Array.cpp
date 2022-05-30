#include<bits/stdc++.h>
#define ll long long
using namespace std;
int removeDuplicates(vector<int>& v) {
        int s=0;
        for(int i=0;i< v.size()-1;++i){
            if(v[i]==v[i+1]){
                v[s]=v[i];
            }else{
                ++s;
                v[s]= v[i+1];
            }
        }
        return s+1;
    }
int main(){
    int t;
    cin >> t;
    while(t--){
        
        int n;
        cin >> n;
        vector<int>v(n);
        
        for(int i=0;i<n;i++){
        cin >> v[i];
        }
    int s = removeDuplicates( v);
        cout << "Size " << s << endl;
        for(auto i:v){
            cout << i << ' ';
        }
        cout << endl;
    }
    return 0;
}