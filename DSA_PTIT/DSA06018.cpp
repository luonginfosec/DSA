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
        ll n;
        cin >> n;
        set<ll> se;
        vector<ll> vt;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            se.insert(x);
        }
        for(auto x : se){
            vt.push_back(x);
        }
        ll res = 0;
        for(ll i = 1; i < vt.size(); i++){
            res += vt[i] - vt[i-1] - 1;
        }
        cout << res << endl;
    }
}