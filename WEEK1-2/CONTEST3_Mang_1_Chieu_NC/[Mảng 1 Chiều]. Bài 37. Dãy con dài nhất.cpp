//Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,k;
    cin >> n >> k;
    vector<ll> a(n);
    for(auto &x : a) cin >> x;
    ll sum = 0, res = -1e9;
    map<ll,ll> mp;
    mp[0] = -1;
    for(ll i = 0; i < n; i++){
        sum = (sum + a[i] % k + k) % k;
        if(mp.count(sum)){
            res = max(res, i - mp[sum]);
        }
        if(mp.count(sum) == 0){
            mp[sum] = i;
        }
    }
    if(res == -1e9) cout << "-1" << endl;
    else cout << res << endl;
}