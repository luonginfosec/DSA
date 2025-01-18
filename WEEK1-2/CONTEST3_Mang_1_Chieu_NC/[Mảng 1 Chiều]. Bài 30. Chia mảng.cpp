// Thoi gian troi qua khong the quay tro lai, LuongVD <3 , AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    ll sum = 0, sum1 = 0, sum2 = 0, sum3 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i < k)
        {
            sum += a[i];
        }
        else
        {
            sum1 += a[i];
        }
        if (i < n - k)
        {
            sum2 += a[i];
        }
        else
        {
            sum3 += a[i];
        }
    }
    cout << max(abs(sum1 - sum), abs(sum3 - sum2)) << endl;
}