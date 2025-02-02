//Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    ll a[n+1] = {0};
    for(ll i = 1; i <= n; i++){
        cin >> a[i];
    }
    map<ll,ll> mp;
    ll res = -1e9 , sum = 0;
    ll valStart = 0;
    mp[0] = 0;
    for(ll i = 1; i <= n; i++){
        sum += a[i];
        if(mp.count(sum)){
            if(i - mp[sum] > res){
                res = i - mp[sum];
                valStart = mp[sum] + 1;
            }
        }
        if(mp.count(sum) == 0){
            mp[sum] = i;
        }
    }
    if(res == -1e9) cout << "NOT FOUND" << endl;
    else {
        for(ll i = valStart; i <= valStart + res - 1; i++){
            cout << a[i] << " ";
        }
    }
}