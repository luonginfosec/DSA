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
    ll sum = 0;
    for (auto &x : a)
    {
        cin >> x;
        sum += x;
    }
    if (sum < k)
        cout << "-1" << endl;
    else
    {
        ll min0 = k, cur_cnt0 = 0;
        for (ll i = 0; i < k; i++)
        {
            if (a[i] == 0)
                cur_cnt0++;
        }
        min0 = min(min0, cur_cnt0);
        for (ll i = k; i < n; i++)
        {
            if (a[i] == 0)
                cur_cnt0++;
            if (a[i - k] == 0)
                cur_cnt0--;
            min0 = min(min0, cur_cnt0);
        }
        cout << min0 << endl;
    }
}