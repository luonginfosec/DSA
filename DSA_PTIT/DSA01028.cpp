//Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,k,oke,a[1001],tmp[1001];
void sinh(){
    ll i = k;
    while(i >= 1 && a[i] == n - k + i){
        i--;
    }
    if(i == 0){
        oke = 0;
    }
    else{
        a[i]++;
        for(ll j = i + 1; j <= k; j++){
            a[j] = a[j-1] + 1;
        }
    }
}
void in(){
    for(ll i = 1; i <= k; i++){
        cout << tmp[a[i]] << " ";
    }
    cout << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t >> k;
    set<ll> se;
    for(ll i = 1; i <= t; i++){
        ll x;
        cin >> x;
        se.insert(x);
    }
    n = se.size();
    oke = 1;
    ll cnt = 1;
    for(auto x : se){
        tmp[cnt++] = x;
    }
    for(ll i = 1; i <= k; i++){
        a[i] = i;
    }
    while(oke){ 
        in();
        sinh();
    }
}