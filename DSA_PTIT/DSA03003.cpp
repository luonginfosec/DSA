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
        for(auto &x : a) cin >> x;
        sort(a,a+n);
        ll res = 0;
        for(ll i = 0; i < n; i++){
            res += a[i] * i;
            res %= 1000000000 + 7;
        }        
        cout << res << endl;
    }
}