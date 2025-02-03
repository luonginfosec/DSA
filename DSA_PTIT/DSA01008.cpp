// Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, a[100], k;
void in()
{
    ll sum = 0;
    for (ll i = 1; i <= n; i++)
    {
        sum += a[i];
    }
    if (sum == k)
    {
        for (ll i = 1; i <= n; i++)
        {
            cout << a[i];
        }
        cout << endl;
    }
}
void Try(ll i)
{
    for (ll j = 0; j <= 1; j++)
    {
        a[i] = j;
        if (i == n)
            in();
        else
            Try(i + 1);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        Try(1);
    }
}