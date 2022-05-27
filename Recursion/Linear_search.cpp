#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool linSer(int arr[], int n, int x)
{
    if (arr[0]==x){
        return true;
    }else if(n==0){
        return false;
    }else{
        return linSer(arr+1,n-1,x);
    }
}
int main()
{
    int n,x1;
    cin >> n >> x1;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (linSer(arr, n, x1))
    {
        cout << "Found\n";
    }
    else
    {
        cout << "Not found\n";
    }

    return 0;
}