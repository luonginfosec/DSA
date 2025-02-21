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
        ll n,k,ans = 0;
        cin >> n >> k;
        vector<ll> a(n);
        for(auto &x : a) cin >> x;
        sort(a.begin(),a.end());
        for(ll i = 0; i < a.size(); i++){
            ll x = k - a[i];
            if(a[i] <= x){
                auto l = lower_bound(a.begin()+i+1,a.end(),x);
                auto r = upper_bound(a.begin()+i+1,a.end(),x);
                if(l != r){
                    ans += r - l;
                }
            }
        }
        cout << ans << endl;
    }
}