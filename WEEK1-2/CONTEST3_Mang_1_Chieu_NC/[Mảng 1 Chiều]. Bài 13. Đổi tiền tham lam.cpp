// Thoi gian troi qua khong the quay tro lai, LuongVD <3 , AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<ll> vt = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
    ll n;
    cin >> n;
    ll result = 0;
    for (int i = vt.size() - 1; i >= 0; i--)
    {
        ll tmp = (ll)n / vt[i];
        result += tmp;
        n -= tmp * vt[i];
    }
    cout << result << endl;
}