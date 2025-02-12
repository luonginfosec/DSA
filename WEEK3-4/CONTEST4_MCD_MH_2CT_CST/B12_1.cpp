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
    sort(a, a + n);
    for (ll i = 0; i < n - 3; i++)
    {
        for (ll j = i + 1; j < n - 2; j++)
        {
            ll l = j + 1, r = n - 1;
            while (l < r)
            {
                ll sum = a[i] + a[j] + a[l] + a[r];
                if (sum == k)
                {
                    cout << "YES" << endl;
                    return 0;
                }
                else if (sum > k)
                {
                    r--;
                }
                else
                {
                    l++;
                }
            }
        }
    }
    cout << "NO" << endl;
}