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
    vector<ll> a(n);
    for (auto &x : a)
        cin >> x;
    sort(a.begin(), a.end());
    ll l = 0, r = 0, res = -1e9;
    while (r < n)
    {
        if (a[r] - a[l] > k)
        {
            while (a[r] - a[l] > k)
            {
                l++;
            }
        }
        res = max(res, r - l + 1);
        r++;
    }
    cout << res << endl;
}