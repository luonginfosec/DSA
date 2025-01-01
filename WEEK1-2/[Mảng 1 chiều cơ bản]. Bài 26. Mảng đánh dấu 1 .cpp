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
    set<ll> se;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        se.insert(x);
    }
    cout << se.size() << endl;
}