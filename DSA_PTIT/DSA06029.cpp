//Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<vector<ll>> res;
void insertion_sort(ll a[], ll n){
    res.clear();
    res.push_back({a[0]});
    for(ll i = 1; i < n; i++){
        ll key = a[i];
        ll j = i - 1;
        while(j >= 0 && a[j] > key){
            a[j+1] = a[j];
            j = j - 1;
        }
        a[j+1] = key;
        vector<ll> tmp;
        for(ll j = 0; j <= i; j++) tmp.push_back(a[j]);
        res.push_back(tmp);
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n; cin >> n;
    ll a[n];
    for(auto &x : a) cin >> x;
    insertion_sort(a,n);
    for(ll i = res.size() - 1; i >= 0; i--){
        cout << "Buoc " << i << ": ";
        for(auto x : res[i]) cout << x << " ";
        cout << endl;
    }
}