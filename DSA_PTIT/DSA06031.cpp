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
        ll n,k;
        cin >> n >> k;
        ll a[n];
        for(auto &x : a) cin >> x;
        multiset<ll> se;
        for(ll i = 0; i < k; i++) se.insert(a[i]);
        cout << *se.rbegin() << " ";
        for(ll i = k; i < n; i++){
            se.insert(a[i]);
            auto it = se.find(a[i-k]);
            se.erase(it);
            cout << *se.rbegin() << " ";
        }
        cout << endl;
    }
}