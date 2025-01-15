// Thoi gian troi qua khong the quay tro lai, LuongVD <3 , AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    unordered_map<ll, ll> mp;
    ll result = 0;
    ll n;
    cin >> n;
    ll x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        mp[x]++;
    }
    for (auto x : mp)
    {
        if (x.second > 1)
        {
            result += (x.second) * (x.second - 1) / 2;
        }
    }
    cout << result << endl;
}