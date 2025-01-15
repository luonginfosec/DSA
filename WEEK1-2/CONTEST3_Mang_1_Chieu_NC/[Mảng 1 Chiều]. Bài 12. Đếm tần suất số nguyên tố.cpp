// Thoi gian troi qua khong the quay tro lai, LuongVD <3 , AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll nt(ll n)
{
    for (ll i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return n > 1;
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
        vt.push_back(x);
        if (nt(x))
        {
            mp[x]++;
        }
    }
    for (int i = 0; i < vt.size(); i++)
    {
        if (mp[vt[i]] != 0)
        {
            cout << vt[i] << " " << mp[vt[i]] << endl;
            mp[vt[i]] = 0;
        }
    }
}