#include <bits/stdc++.h>
#define ll long long
using namespace std;
int numberOfSteps(int num)
{
    int numberOfSteps(int num)
    {
        if (num == 0)
        {
            return 0;
        }
        else if (num % 2 == 0)
        {
            num /= 2;
        }
        else
        {
            num -= 1;
        }
        return 1 + numberOfSteps(num);
    }
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
