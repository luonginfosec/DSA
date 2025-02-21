//Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool cmp(pair<ll,ll> a, pair<ll,ll> b){
    return a.first < b.first;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll a[n];
        vector<pair<ll,ll>> vt;
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            vt.push_back({a[i],i});
        }
        sort(vt.begin(),vt.end(),cmp);
        ll res = -1e9;
        ll last = vt[0].second;
        for(ll i = 1; i < n; i++){
            if(vt[i].second - last > res){
                res = vt[i].second - last;
            }
            last = min(last, vt[i].second);
        }
        cout << res << endl;
    }
}