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
        map<ll,ll> mp;
        for(auto &x : a){
            cin >> x;
            mp[x]++;
        }
        ll cnt = 0;
        for(auto x : mp){
            ll num1 = x.first;
            ll num2 = k - x.first;
            if(mp.find(num2) != mp.end()){
                if(num1 == num2){
                    cnt += mp[num1] * (mp[num1] - 1) / 2;
                }
                else{
                    cnt += mp[num1] * mp[num2];
                }
                mp[num1] = 0;
                mp[num2] = 0;
            }
        }
        cout << cnt << endl;
    }
}