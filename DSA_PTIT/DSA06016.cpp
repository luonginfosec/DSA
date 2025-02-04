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
        ll n, m;
        cin >> n >> m;
        ll a[n], b[m];
        ll valMax = -1e9, valMin = +1e9;
        for (auto &x : a)
        {
            cin >> x;
            valMax = max(valMax,x);
        }
        for (auto &x : b)
        {
            cin >> x;
            valMin = min(valMin,x);
        }
        cout << valMax * valMin << endl;
    }
}