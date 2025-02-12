// Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
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
    for (ll i = 0; i < n - 1; i++)
    {
        ll min_idx = i;
        for (ll j = i + 1; j < n; j++)
        {
            if (a[j] < a[min_idx])
            {
                min_idx = j;
            }
        }
        swap(a[min_idx], a[i]);
        cout << "Buoc " << i + 1 << ": ";
        for (ll j = 0; j < n; j++)
        {
            cout << a[j] << " ";
        }
        cout << endl;
    }
}