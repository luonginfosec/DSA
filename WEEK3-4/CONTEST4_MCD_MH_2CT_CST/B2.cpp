//Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,q;
    cin >> n >> q;
    ll a[n];
    for(auto &x : a) cin >> x;
    ll pre[n];
    pre[0] = a[0];
    for(ll i = 1; i < n; i++){
        pre[i] = pre[i-1] + a[i];    
    }
    while(q--){
        ll l,r;
        cin >> l >> r;
        if(l == 0){
            cout << pre[r] << endl;
        }
        else{
            cout << pre[r] - pre[l-1] << endl;
        }
    }
}