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
    map<ll, ll> mp;
    vector<ll> a(n);
    for (auto &x : a)
    {
        cin >> x;
        mp[x]++;
    }
    for (auto x : mp)
    {
        cout << x.first << " " << x.second << endl;
    }
    cout << endl;
    for (auto &y : a)
    {
        if (mp[y] > 0)
        {
            cout << y << " " << mp[y] << endl;
            mp[y] = 0;
        }
    }
}