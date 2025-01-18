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
    vector<ll> vt;
    ll x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        vt.push_back(x);
    }
    sort(vt.begin(), vt.end());
    ll result = 0;
    for (int i = 0; i < n; i++)
    {
        result += vt[i] * i;
        result %= 1000000000 + 7;
    }
    cout << result << endl;
}