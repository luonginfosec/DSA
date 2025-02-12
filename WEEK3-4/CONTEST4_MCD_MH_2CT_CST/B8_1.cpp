// Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, s;
    cin >> n >> s;
    ll a[n];
    for (auto &x : a)
        cin >> x;
    ll sum = 0, l = 0, res = 0;
    map<ll, ll> mp;
    for (ll r = 0; r < n; r++)
    {
        mp[a[r]]++;
        while (mp.size() > s)
        {
            mp[a[l]]--;
            if (mp[a[l]] == 0)
                mp.erase(a[l]);
            l++;
        }
        res += r - l + 1;
    }
    cout << res << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}