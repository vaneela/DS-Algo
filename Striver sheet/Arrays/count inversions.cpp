#include <bits/stdc++.h> 
long long merge(long long * arr,int s, int e){
    long long inv=0;
    vector<long long>v1,v2;
    int mid= s+ (e-s)/2;
    for(int i=s; i<=mid; i++){
        v1.push_back(arr[i]);
    }
    for(int i=mid+1; i<=e ;i++)
        v2.push_back(arr[i]);
    int i=0, j=0, cur= s;
    while(i< v1.size() && j< v2.size()){
        if(v1[i] <= v2[j])
            arr[cur++]=v1[i++];
        else{
            inv += (v1.size()-i);
            arr[cur++] = v2[j++];
        }
    }
    while(i < v1.size())
        arr[cur++] =v1[i++];
    while(j < v2.size())
        arr[cur++] = v2[j++];
    return inv;
}

long long mergesort(long long *arr, int s, int e){
    long long inv=0;
    if(s>=e)
        return inv;
    int mid = s+(e-s)/2;
    inv += mergesort(arr,s,mid);
    inv += mergesort(arr,mid+1,e);
    inv += merge(arr,s,e);
    return inv;
}
long long getInversions(long long *arr, int n){
    // Write your code here.
    return mergesort(arr,0,n-1);
}