// Thoi gian troi qua khong the quay tro lai, LuongVD <3 , AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll f[101];
void sang()
{
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i <= 100; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
}
int kt(ll n)
{
    for (int i = 0; i <= 100; i++)
    {
        if (f[i] == n)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    sang();
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    int oke = 0;
    for (ll i = 0; i < n; i++)
    {
        if (kt(a[i]))
        {
            oke = 1;
            cout << a[i] << " ";
        }
    }
    if (!oke)
        cout << "NONE";
}