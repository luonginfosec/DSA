//Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll> res;
ll check(ll n){
    if(n < 2) return 0;
    for(ll i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}
void Try(ll x, ll l, ll r, ll &cnt){
    if(x >= l && x <= r){
        ++cnt;
    }
    for(ll i = 1; i <= 9; i+=2){
        ll tmp = x*10 + i;
        if(tmp > r){
            return;
        }
        if(check(tmp)){
            res.push_back(tmp);
            Try(tmp,l,r,cnt);
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll l,r,cnt = 0;
    cin >> l >> r;
    for(ll i = 2; i < 10; i++){
        if(check(i)){
            res.push_back(i);
            Try(i,l,r,cnt);
        }
    }
    sort(res.begin(),res.end());
    for(auto x : res){
        cout << x << endl;
    }
    cout << res.size() << endl;
}