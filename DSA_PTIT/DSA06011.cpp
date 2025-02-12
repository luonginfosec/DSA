// Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll kt(ll x)
{
    if (x < 0)
    {
        return -1 * x;
    }
    else
    {
        return x;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for (auto &x : a)
            cin >> x;
        // sort(a, a + n);
        ll res = 1e9;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                if (kt(a[i] + a[j]) < kt(res) && i != j)
                {
                    res = a[i] + a[j];
                }
            }
        }
        cout << res << endl;
    }
}
