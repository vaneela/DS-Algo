#include <bits/stdc++.h>
#define ll long long
using namespace std;
int binarySearch(vector<int> arr, int s, int e, int x)
{
    int mid = (s + e) / 2;
    if (s > e)
    {
        return -1;
    }
    else if (arr[mid] == x)
    {
        return mid;
    }
    else if (arr[mid] > x)
    {
        return binarySearch(arr, 0, mid - 1, x);
    }
    else
    {
        return binarySearch(arr, mid + 1, e, x);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int v[n];
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int s = 0, e = n - 1;
        binarySearch(v, n, s, e, x)
    }
    return 0;
}