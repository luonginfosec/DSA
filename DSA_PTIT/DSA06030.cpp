// Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<vector<ll>> res;
void bubble_sort(ll a[], ll n)
{
    res.clear();
    for (ll i = 0; i < n - 1; i++)
    {
        ll oke = 0;
        for (ll j = 1; j < n; j++)
        {
            if (a[j-1] > a[j])
            {
                swap(a[j-1], a[j]);
                oke = 1;
            }
        }
        if (oke)
        {
            vector<ll> tmp;
            for (ll j = 0; j < n; j++)
                tmp.push_back(a[j]);
            res.push_back(tmp);
        }
        else break;
    }
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
        cin >> n;
        ll a[n];
        for (auto &x : a)
            cin >> x;
        bubble_sort(a, n);
        for (ll i = res.size() - 1; i >= 0; i--)
        {
            cout << "Buoc " << i + 1 << ": ";
            for (auto x : res[i])
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }
}