//Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void find(vector<ll>& a, ll n){
    unordered_map<ll,ll> mp;
    ll tmp = 1e9;
    ll res = - 1;
    for(ll i = 0; i < n; i++){
        if(mp.find(a[i]) != mp.end()){
            if(mp[a[i]] < tmp){
                tmp = mp[a[i]];
                res = a[i];
            }
        }
        else{
            mp[a[i]] = i;
        }
    }
    if(res != -1) cout << res << endl;
    else cout << "NO" << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for(auto &x : a) cin >> x;
        find(a,n);
    }
}