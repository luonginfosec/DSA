//Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,k;
vector<ll> v;
vector<bool> f;
vector<vector<bool>> ans;
void check(){
    ll sum = 0;
    for(ll i = 1; i <= n; i++) sum += v[i] * f[i];
    if(sum == k) ans.push_back(f);
}
void Try(ll i){
    for(ll j = 0; j < 2; ++j){
        f[i] = j;
        if(i == n) check();
        else Try(i+1);
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k;
    v.resize(n + 1);
    f.resize(n + 1);
    for(ll i = 1; i <= n; i++) cin >> v[i];
    Try(1);
    for(auto x : ans){
        for(ll i = 1; i <= n; i++){
            if(x[i]){
                cout << v[i] << " ";
            }
        }
        cout << endl;

    }
    cout << ans.size();
}