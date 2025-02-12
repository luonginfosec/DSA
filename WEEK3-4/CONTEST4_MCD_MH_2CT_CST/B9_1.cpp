// Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, k;
    cin >> n >> k;
    ll a[n];
    for (auto &x : a)
        cin >> x;
    ll sum = 0, l = 0, res = 0;
    multiset<ll> ms;
    for (ll r = 0; r < n; r++)
    {
        ms.insert(a[r]);
        while (ms.size() >= 1 && (*ms.rbegin() - *ms.begin()) > k)
        {
            auto it = ms.find(a[l]);
            ms.erase(it);
            l++;
        }
        res += r - l + 1;
    }
    cout << res << endl;
}