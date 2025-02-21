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
        vector<vector<ll>> res;
        for(ll i = 0; i < n - 1; i++){
            for(ll j = i + 1; j < n; j++){
                if(a[i] > a[j]){
                    swap(a[i],a[j]);
                }
            }
            vector<ll> tmp;
            for(ll j = 0; j < n; j++){
                tmp.push_back(a[j]);
            }
            res.push_back(tmp);
        }
        for(ll i = res.size() - 1; i >= 0; i--){
            cout << "Buoc " << i + 1 << ": ";
            for(auto x : res[i]){
                cout << x << " ";
            }
            cout << endl;
        }
    }
}