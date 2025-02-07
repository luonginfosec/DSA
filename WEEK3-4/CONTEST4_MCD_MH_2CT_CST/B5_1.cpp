// Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, s;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> s;
    ll a[n+5] = {0};
    for(ll i = 1; i <= n; i++) cin >> a[i];
    for(ll i = 1; i <= n; i++) a[i] += a[i-1];
    ll l = 0, r = 1, res = 1e9;
    while(r<= n){
        if(a[r] - a[l] >= s){
            res = min(res,r-l);
            l++;
        }
        else{
            r++;
        }
    }
    if(res != 1e9) cout << res << endl;
    else cout << "-1" << endl;
}
