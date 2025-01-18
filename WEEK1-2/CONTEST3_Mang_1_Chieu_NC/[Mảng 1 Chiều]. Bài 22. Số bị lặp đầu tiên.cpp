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
    ll x;
    ll result = -1e9;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        mp[x]++;
        if (mp[x] == 2)
        {
            result = x;
        }
    }
    if (result == -1e9)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << result << endl;
    }
}