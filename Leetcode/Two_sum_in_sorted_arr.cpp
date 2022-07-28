#include <bits/stdc++.h>
using namespace std;
vi twoSum(vi &arr, int x)
{
    int s = 0, e = arr.size() - 1;
    vi ans(2);
    while (s < e)
    {
        int sum = arr[s] + arr[e];
        if (sum == x)
        {
            ans[0] = s + 1;
            ans[1] = e + 1;
            break;
        }
        else if (sum > x)
        {
            e--;
        }
        else
        {
            s++;
        }
    }
}
