//Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    vector<ll> a,b;
    for(ll i = 0; i < n; i++){
        ll x;
        cin >> x;
        if(i % 2 == 0) a.push_back(x);
        else b.push_back(x);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end(),greater<ll>());
    ll r = min(a.size(),b.size());
    for(ll i = 0 ; i < r ; i++){
        cout << a[i] << " " << b[i] << " ";
    }
    if(a.size() > r){
        for(ll i = r; i < a.size(); i++){
            cout << a[i] << " ";
        }
    }
    else{
        for(ll i = r; i < b.size(); i++){
            cout << b[i] << " ";
        }
    }
}