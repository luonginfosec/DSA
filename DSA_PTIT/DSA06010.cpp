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
        set<ll> se;
        for(auto &x : a){
            cin >> x;
            while(x){
                se.insert(x%10);
                x /= 10;
            }
        }
        for(auto x : se) cout << x << " ";
        cout << endl;
    }
}