//Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool check(vector<ll>& a, ll n, ll k){
    sort(a.begin(),a.end());
    for(ll i = 0; i < n - 2; i++){
        ll l = i + 1, r = n - 1;
        while(l < r){
            ll total = a[i] + a[l] + a[r];
            if(total == k){
                return true;
            }
            if(total < k){
                l++;
            }
            else{
                r--;
            }
        }
    }
    return false;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,k;
    cin >> n >> k;
    vector<ll> a(n);
    for(auto &x : a) cin >> x;
    if(check(a,n,k)) cout << "YES" << endl;
    else cout << "NO" << endl;
}