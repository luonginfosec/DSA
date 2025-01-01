// Thoi gian troi qua khong the quay tro lai, LuongVD <3 , AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll nt(ll n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return n > 1;
}
void solve1(ll a[], ll n)
{
    int cnt = 0;
    for (ll i = 0; i < n; i++)
    {
        if (nt(a[i]))
            cnt++;
    }
    cout << cnt << endl;
}
void solve2(ll a[], ll n)
{
    int cnt = 0;
    for (ll i = 0; i < n; i++)
    {
        ll tmp = 0;
        ll tmp1 = a[i];
        while (tmp1)
        {
            tmp = tmp * 10 + tmp1 % 10;
            tmp1 /= 10;
        }
        if (tmp == a[i])
            cnt++;
    }
    cout << cnt << endl;
}
void solve3(ll a[], ll n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        ll tmp = sqrt(a[i]);
        if (tmp * tmp == a[i])
        {
            cnt++;
        }
    }
    cout << cnt << endl;
}
void solve4(ll a[], ll n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        ll sum = 0;
        while (a[i])
        {
            sum += a[i] % 10;
            a[i] /= 10;
        }
        if (nt(sum))
            cnt++;
    }
    cout << cnt << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    ll a[n];
    for (auto &x : a)
        cin >> x;
    solve1(a, n);
    solve2(a, n);
    solve3(a, n);
    solve4(a, n);
}