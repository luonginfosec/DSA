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
        ll cnt = 0;
        for(ll i = 0; i < n - 1; i++){
            ll min_idx = i;
            ll oke = 0;
            for(ll j = i + 1; j < n; j++){
                if(a[j] < a[min_idx]){
                    min_idx = j;
                    oke = 1;
                }
            }
            if(oke) cnt++;
            swap(a[min_idx],a[i]);
        }
        cout << cnt << endl;
    }
}