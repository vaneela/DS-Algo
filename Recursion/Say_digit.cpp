#include <bits/stdc++.h>
#define ll long long
using namespace std;
void sayDigits(int n, string str[])
{
    if (n == 0)
    {
        return;
    }
    int digit = n % 10;
    n /= 10;
    sayDigits(n, str);
    cout << str[digit] << " ";
}

int main()
{
    int n;
    cin >> n;
    string arr[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    sayDigits(n, arr);
    return 0;
}