// Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll a[n];
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        for (ll i = n - 1; i >= n - k; i--)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}