// Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, k, a[1000], b[1000], final;
void ktao()
{
    final = 0;
    cin >> n >> k;
    for (ll i = 1; i <= k; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
}
void sinh()
{
    ll i = k;
    while (i >= 1 && a[i] == n - k + i)
    {
        i--;
    }
    if (i == 0)
        final = 1;
    else
    {
        a[i]++;
        for (ll j = i + 1; j <= n; j++)
        {
            a[j] = a[j - 1] + 1;
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {

        ktao();
        sinh();
        if (final == 1)
            cout << k << endl;
        else
        {
            set<ll> se;
            for (ll i = 1; i <= k; i++)
            {
                se.insert(a[i]);
                se.insert(b[i]);
            }
            cout << se.size() - k << endl;
        }
    }
}