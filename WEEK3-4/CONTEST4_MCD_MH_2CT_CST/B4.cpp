//Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    ll a[n];
    for(auto &x : a) cin >> x;
    cout << a[0] << " ";
    for(ll i = 1; i < n; i++){
        cout << a[i] - a[i-1] << " ";
    }    
}