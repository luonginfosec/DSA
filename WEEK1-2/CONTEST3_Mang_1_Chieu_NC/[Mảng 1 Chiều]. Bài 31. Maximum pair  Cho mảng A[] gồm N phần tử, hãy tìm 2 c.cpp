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
    vector<ll> vt(n);
    for (auto &x : vt)
        cin >> x;
    sort(vt.begin(), vt.end());
    ll result = -1e9;
    result = max(result, abs(vt[0] + vt[1]));
    result = max(result, abs(vt[n - 1] + vt[n - 2]));
    result = max(result, abs(vt[n - 1] + vt[0]));
    cout << result << endl;
}