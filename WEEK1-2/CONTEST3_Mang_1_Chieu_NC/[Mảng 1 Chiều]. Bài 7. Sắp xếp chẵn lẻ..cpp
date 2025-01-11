// Thoi gian troi qua khong the quay tro lai, LuongVD <3 , AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<ll> vt, vt1;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x % 2 == 0)
            vt.push_back(x);
        else
            vt1.push_back(x);
    }
    sort(vt1.begin(), vt1.end(), greater<ll>());
    sort(vt.begin(), vt.end());
    for (auto x : vt1)
        cout << x << " ";
    for (auto x : vt)
        cout << x << " ";
}