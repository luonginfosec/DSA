// Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a[200005] = {0};
ll b[200005] = {0};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, k, q;
    cin >> n >> k >> q;
    while (n--)
    {
        ll l, r;
        cin >> l >> r;
        a[l]++;
        a[r + 1]--;
    }
    a[0] = b[0] = 0;
    for (ll i = 1; i <= 200000; i++)
    {
        a[i] += a[i - 1];
        if (a[i] >= k)
        {
            b[i] = 1;
        }
        else
        {
            b[i] = 0;
        }
        b[i] += b[i - 1];
    }
    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        cout << b[r] - b[l - 1] << endl;
    }
}