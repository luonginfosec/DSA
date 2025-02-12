// Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll x;
int cmp(ll a, ll b)
{
    return abs(x-a) < abs(x-b); 
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n >> x;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        stable_sort(a, a + n, cmp);
        for (auto x : a)
            cout << x << " ";
        cout << endl;
    }
}