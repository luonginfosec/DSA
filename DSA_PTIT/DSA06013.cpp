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
        ll n,x;
        cin >> n >> x;
        ll a[n];
        unordered_map<ll,ll> mp;
        for(auto &x : a){
            cin >> x;
            mp[x]++;
        }
        if(mp.find(x) != mp.end()){
            cout << mp[x] << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
}