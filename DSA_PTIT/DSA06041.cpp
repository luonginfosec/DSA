//Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll a[n];
        unordered_map<ll,ll> mp;
        for(auto &x : a){
            cin >> x;
            mp[x]++;
        }
        ll tmp = n / 2, res = -1;
        for(auto &x : mp){
            if(x.second > tmp){
                tmp = x.second;
                res = x.first;
            }
        }
        if(res == -1) cout << "NO" << endl;
        else cout << res << endl;
    }
}