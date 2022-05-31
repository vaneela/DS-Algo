#include<bits/stdc++.h>
#define ll long long
using namespace std;
int maxi(int *arr,int n){
    int max = 0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[max]){
            max = i;
        }
    }
    return max;
}
void arrSort(int *arr, int n){
    if(n==0 || n==1){
        return;
    }
    int max = maxi(arr,n);
    swap(arr[max],arr[n-1]);
    
    arrSort(arr,n-1);
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        arrSort(arr,n);
        for(int i=0;i<n;i++){
            cout << arr[i]<< " ";
        }cout << endl;
    }
    return 0;
}