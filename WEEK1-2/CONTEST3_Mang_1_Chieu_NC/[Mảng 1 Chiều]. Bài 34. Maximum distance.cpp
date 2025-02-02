//Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,k;
    cin >> n >> k;
    ll a[n];
    map<ll,ll> mp;
    for(auto &x :a ) cin >> x;
    mp[a[0]] = 0;
    ll res = -1e9;
    for(int i = 1; i < n; i++){
        if(mp.count(a[i] - k)){
            res = max(res, i - mp[a[i] - k]);
        }   
        if(mp.count(a[i] + k)){
            res = max(res, i - mp[a[i] + k]);
        } 
        if(mp.count(a[i]) == 0){
            mp[a[i]] = i;
        }
    }
    if(res == -1e9) cout << -1 << endl;
    else cout << res <<  endl;
}