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
    for(auto &x : a) cin >> x;
    sort(a,a+n);
    ll l = 0, r = n - 1;
    int oke = 0;
    while(l < r){
        if(a[l] + a[r] == k){
            oke = 1;
            break;
        }
        else if(a[l] + a[r] > k) r--;
        else if(a[l] + a[r] < k ) l++;
    }
    if(oke) cout << "YES" << endl;
    else cout << "NO" << endl;
} 