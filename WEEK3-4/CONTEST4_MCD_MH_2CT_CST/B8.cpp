//Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,m,k;
    cin >> n >> m >> k;
    ll a[n];
    for(auto &x : a) cin >> x;
    vector<pair<pair<ll,ll>,ll>> vt;
    while (m--)
    {
        ll l,r,d;
        cin >> l >> r >> d;
        l--; r--;
        vt.push_back({{l,r},d});        
    }
    ll b[n+1] = {0};
    while(k--){
        ll l,r;
        cin >> l >> r;
        l--; r--;
        for(ll i = l; i <= r; i++){
            b[vt[i].first.first] += vt[i].second;
            b[vt[i].first.second + 1] -= vt[i].second;
        }
    }
    for(ll i = 1; i < n; i++){
        b[i] += b[i-1];
    }
    for(ll i = 0; i < n; i++){
        cout << b[i] + a[i]<< " ";
    }
}