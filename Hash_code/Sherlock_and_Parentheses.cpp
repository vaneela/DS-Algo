#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define ii pair<int, int>

using namespace std;

// all cases passed
 
int main()
{
    int t;
    cin >> t;
    for (int x = 1; x <= t; x++)
    {
        int l, r;
        cin >> l >> r;
        int d = min(l, r);
        int count = (ll)d*(d+1)/2;
        cout << "Case " <<"#" << x << ": " << count << endl;
    }
    return 0;
}