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
        ll res = 1e9;
        for(ll i = 0; i < n; i++){
            if(i == 0){
                res = min(res,a[1] - a[0]);
            }
            else if(i == n - 1){
                res = min(res,a[n-1] - a[n-2]);
            }
            else{
                res = min(res,a[i] - a[i-1]);
                res = min(res,a[i+1] - a[i]);
            }
        }
        cout << res << endl;
    }
}