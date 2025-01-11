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
    ll a[n];
    for (auto &x : a)
        cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            cout << abs(a[0] - a[1]) << " " << abs(a[0] - a[n - 1]);
        }
        else if (i == n - 1)
        {
            cout << abs(a[n - 1] - a[n - 2]) << " " << abs(a[n - 1] - a[0]);
        }
        else
        {
            cout << min(abs(a[i] - a[i - 1]), abs(a[i] - a[i + 1])) << " " << max(abs(a[i] - a[0]), abs(a[i] - a[n - 1]));
        }
        cout << endl;
    }
}