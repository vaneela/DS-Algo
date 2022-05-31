#include<bits/stdc++.h>
#define ll long long
using namespace std;
void sortArr(int * arr , int n){
    if(n==1 || n==0){
        return;
    }
    for(int i = 0;i< n-1; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    sortArr(arr,n-1);
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i< n;i++){
            cin >> arr[i];
        }
        sortArr(arr,n);
        for(int i =0;i<n;i++){
            cout << arr[i] <<' ';
        }
        cout << endl;
    }
    return 0;
}