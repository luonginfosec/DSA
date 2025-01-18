// Thoi gian troi qua khong the quay tro lai, LuongVD <3 , AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    ll a[n];
    map<ll, ll> mp;
    ll oke = -1;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    mp[a[0]] = 1;
    for (ll i = 1; i < n; i++)
    {
        a[i] += a[i - 1];
        mp[a[i]]++;
        if (mp[a[i]] >= 2)
        {
            oke = 1;
            break;
        }
    }
    cout << oke << endl;
}