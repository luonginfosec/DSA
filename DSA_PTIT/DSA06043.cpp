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
        ll n;
        cin >> n;
        ll a[n+1],oke = 0;
        memset(a,0,sizeof(a));
        for(ll i = 1; i <= n; i++){
            cin >> a[i];
        }
        for(ll i = 1; i <= n; i++){
            a[i] += a[i-1];
        }
        for(ll i = 1; i <= n; i++){
            if(a[i] - a[0] == a[n] - a[i+1] && i + 1 <= n){
                cout << i + 1 << endl;
                oke = 1;
                break;
            }
        }
        if(!oke) cout << "-1" << endl;
    }
}