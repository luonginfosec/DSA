// Thoi gian troi qua khong the quay tro lai, LuongVD <3 , AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, d;
    cin >> n >> d;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll result = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] <= a[i - 1])
        {
            ll tmp = (-a[i] + a[i - 1]) / d + 1;
            result += tmp;
            a[i] += tmp * d;
        }
    }
    cout << result << endl;
}