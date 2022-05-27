#include <bits/stdc++.h>
#define ll long long
using namespace std;
int numberOfSteps(int num)
{
    int count = 0;
    while (num)
    {
        if (num % 2 == 0)
        {
            num /= 2;
        }
        else
        {
            num -= 1;
        }
        count++;
    }
    return count;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << numberOfSteps(n) << endl;
    }
    return 0;
}
