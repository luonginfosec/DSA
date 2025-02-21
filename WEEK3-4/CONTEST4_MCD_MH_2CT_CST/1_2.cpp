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
    ll res = -1e9;
    ll sum = 0;
    for(ll i = 0; i < k; i++){
        sum += a[i];
    }
    res = sum;
    ll st = 0;
    for(ll i = k; i < n; i++){
        sum = sum + a[i] - a[i-k];
        if(sum > res){
            res = sum;
            st = i - k + 1;
        }
    }
    cout << res << endl;
    for(ll i = st; i < st+k;i++){
        cout << a[i] << " ";
    }
}