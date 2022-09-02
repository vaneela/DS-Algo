#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	int mis,rep;
    long long sum = n*(n+1)/2;
    long long sqsum =(long long)n*(n+1)*(2*n +1)/6;
    for(auto i : arr){
        sum -= (long long)i;
        sqsum -=(long long)i*i;
    }
//     cout << sum <<" "<< sqsum << endl;
    mis =( sum + sqsum/sum)/2;
    rep = mis -sum;
    return {mis,rep};
}
