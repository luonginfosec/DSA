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
    ll oke = -1 , sum = 0;
    for(ll i = 1; i <= n; i++){
        sum += a[i];
        if(mp.count(sum) == 1){
            oke = 1;
            break;
        }
        mp[sum]++;
    }
    cout << oke << endl;
}