//Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll> a(1000005,0);
void sang(){
    a[0] = a[1] = 0;
    for(ll i = 2; i <= 1000; i++){
        if(a[i] == 0){
            for(ll j = i*i; j <= 1000000; j += i){
                a[j] = 1;
            }
        }
    }
}
int main() {
    sang();
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll oke = 0;
        for(ll i = 2; i <= n/2; i++){
            if(a[i] == 0 && a[n-i] == 0){
                cout << i << " "<< n-i << endl;
                oke = 1;
                break;
            }
        }
        if(!oke) cout << "-1" << endl;
    }
}