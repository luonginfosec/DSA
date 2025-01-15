// Thoi gian troi qua khong the quay tro lai, LuongVD <3 , AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int check(ll n)
{
    vector<ll> vt;
    while (n)
    {
        vt.push_back(n % 10);
        n /= 10;
    }
    reverse(vt.begin(), vt.end());
    for (int i = 1; i < vt.size(); i++)
    {
        if (!(vt[i] >= vt[i - 1]))
        {
            return 0;
        }
    }
    return 1;
}
int cmp(pair<ll, ll> a, pair<ll, ll> b)
{
    if (a.second != b.second)
    {
        return a.second > b.second;
    }
    return a.first < b.first;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll x;
    vector<ll> vt;
    map<ll, ll> mp;
    while (cin >> x)
    {
        if (check(x))
        {
            vt.push_back(x);
            mp[x]++;
        }
    }
    vector<pair<ll, ll>> vt1;
    for (auto x : vt)
    {
        if (mp[x] != 0)
        {
            vt1.push_back({x, mp[x]});
            mp[x] = 0;
        }
    }
    sort(vt1.begin(), vt1.end(), cmp);
    for (auto x : vt1)
    {
        cout << x.first << " " << x.second << endl;
    }
}