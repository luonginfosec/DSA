// Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n, s;
    cin >> n >> s;
    vector<ll> a(n + 1, 0);
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
        a[i] += a[i - 1];
    }
    ll l = 0, cnt = 0;
    while (l <= n - 1)
    {
        ll r = n;
        while (a[r] - a[l] >= s && r > l)
        {
            cnt++;
            r--;
        }
        l++;
    }
    cout << cnt << endl;
}
void solve1(){
    ll n,s;
    cin >> n >> s;
    ll a[n];
    for(auto &x : a) cin >> x;
    ll sum = 0, l = 0, res = 0;
    for(ll r = 0; r < n; r++){
        sum += a[r];
        while(sum >= s){
            res += n - r;
            sum -= a[l];
            ++l;
        }
    }
    cout << res << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // solve();
    solve1();
}