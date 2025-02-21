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
        ll n,K;
        cin >> n >> K;
        ll oke = 0;
        ll a[n];
        for(auto &x : a) cin >> x;
        sort(a,a+n);
        for(ll i = 0; i < n - 2; i++){
            ll l = i + 1, r = n - 1;
            while(l < r){
                if(a[i] + a[l] + a[r] == K){
                    oke = 1;
                    break;
                }
                else if(a[i] + a[l] + a[r] > K){
                    r--;
                }
                else{
                    l++;
                }
            }
            if(oke) break;
        }
        if(oke) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}