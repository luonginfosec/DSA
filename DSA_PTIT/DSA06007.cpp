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
        ll a[n],b[n];
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            b[i] = a[i];
        }
        set<ll> se;
        sort(a,a+n);
        ll min_idx = n - 1, max_idx = 0;
        for(ll i = 0; i < n; i++){
            if(a[i] != b[i]){
                se.insert(i+1);
            }
        }
        cout << *se.begin() << " " << *se.rbegin()<< endl;
    }
}