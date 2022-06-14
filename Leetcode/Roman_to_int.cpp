#include <bits/stdc++.h>
#define ll long long
using namespace std;
int digit(char c)
{
    int ans;
    switch (c)
    {
    case 'I':
        ans = 1;
        break;
    case 'V':
        ans = 5;
        break;
    case 'X':
        ans = 10;
        break;
    case 'L':
        ans = 50;
        break;
    case 'C':
        ans = 100;
        break;
    case 'D':
        ans = 500;
        break;
    case 'M':
        ans = 1000;
        break;
    }
    return ans;
}
int romanToInt(string s)
{   int n = s.size();
// cout << n << endl;
    int ans=0;
    
    for (int i = n-2; i>-1; i--)
    {
        ans+=digit(s[i+1]);
        if(digit(s[i])<digit(s[i+1]))
            ans-=digit(s[i--]);
    }
    if(digit(s[0])>=digit(s[1]))
        ans+=digit(s[0]);
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {   string s;
    cin >> s;
        cout << romanToInt(s)<< endl;
    }
    return 0;
}