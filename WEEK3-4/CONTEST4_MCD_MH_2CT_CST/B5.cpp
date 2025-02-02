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
    ll b[n+1] = {0}; 
    while (q--)
    {
        ll l,r,k;
        cin >> l >> r >> k;
        b[l] += k;
        b[r+1] -= k;
    }
    for(ll i = 1; i < n; i++){
        b[i] += b[i-1];
    }
    for(ll i = 0; i < n; i++){
        cout << a[i] + b[i] << " ";
    }
}