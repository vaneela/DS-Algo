#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool isSorted(int arr[], int n)
{
    if (n == 1)
    {
        return true;
    }
    else if (arr[n - 1] < arr[n - 2])
    {
        return false;
    }
    else
    {
        isSorted(arr, n - 1);
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << isSorted(arr, n) << endl;
    return 0;
}