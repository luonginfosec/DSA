// Thoi gian troi qua khong the quay tro lai, LuongVD <3 , AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, k;
    cin >> n >> k;
    ll a[n + 1] = {0};
    map<ll, ll> mp;
    mp[0] = 0;
    ll sum = 0;
    ll res = 1e9;
    for (ll i = 1; i <= n; i++)
        cin >> a[i];
    for (ll i = 1; i <= n; i++)
    {
        sum += a[i];
        if (mp.count(sum - k))
        {
            res = min(res, i - mp[sum - k]);
        }
        mp[sum] = i;
    }
    if (res == 1e9)
        cout << "-1" << endl;
    else
        cout << res << endl;
}