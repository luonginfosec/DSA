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
    ll cur_sum = 0, l = 0, min_len = 1e9, st = 0;
    for (ll r = 0; r < n; r++)
    {
        cur_sum += a[r];
        if (cur_sum >= k)
        {
            while (1)
            {
                if (cur_sum - a[l] < k)
                    break;
                else
                {
                    cur_sum -= a[l];
                    l++;
                }
            }
            if (min_len > r - l + 1)
            {
                min_len = r - l + 1;
                st = l;
            }
        }
    }
    if (min_len == 1e9)
        cout << "-1" << endl;
    else
    {
        for (ll i = st; i < st + min_len; i++)
        {
            cout << a[i] << " ";
        }
    }
}