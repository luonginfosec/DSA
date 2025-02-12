// Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, s;
    cin >> n >> s;
    vector<ll> a(n + 1, 0);
    for (ll i = 1; i <= n; i++)         
    {
        cin >> a[i];
        a[i] += a[i - 1];
    }
    ll l = 0, r = 1, cnt = 0;
    while (l <= n - 1)
    {
        ll tmp = 0;
        while(a[r] - a[l] <= s && r <= n){
            tmp += r - l;
            r++;
        }
        cnt += tmp;
        l++;
    }
    cout << cnt << endl;
}