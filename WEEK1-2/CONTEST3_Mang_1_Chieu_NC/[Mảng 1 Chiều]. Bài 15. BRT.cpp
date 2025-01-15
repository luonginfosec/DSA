// Thoi gian troi qua khong the quay tro lai, LuongVD <3 , AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &x : a)
        cin >> x;
    sort(a.begin(), a.end());

    ll minDis = 1e9;
    ll cnt = 0;
    for (int i = 1; i < n; i++)
    {
        ll tmp = abs(a[i] - a[i - 1]);
        if (tmp < minDis)
        {
            cnt = 1;
            minDis = tmp;
        }
        else if (tmp == minDis)
        {
            cnt++;
        }
    }
    cout << minDis << " " << cnt << endl;
}