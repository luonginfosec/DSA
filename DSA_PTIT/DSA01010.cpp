// Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a[1000], b[1000], n, k, final = 0;
bool used[1001] = {0};
void ktao()
{
    for (ll i = 1; i <= k; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    memset(used, 0, 1001);
    final = 0;
}
void sinh()
{
    ll i = k;
    while (i >= 1 && a[i] == n - k + i)
    {
        i--;
    }
    if (i == 0)
    {
        final = 1;
    }
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
        cin >> n >> k;
        ktao();
        sinh();
        if (final)
            cout << k;
        else
        {
            ll cnt = 0;
            for (ll i = 1; i <= k; i++)
            {
                used[b[i]] = true;
            }

            for (ll i = 1; i <= k; i++)
            {
                if (!used[a[i]])
                {
                    cnt++;
                }
            }
            cout << cnt;
        }
        cout << endl;
    }
}