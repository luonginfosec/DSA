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
        ll a[n];
        for(auto &x : a){
            cin >> x;
            x = x * x;
        }
        sort(a,a+n);
        ll oke = 0;
        for(ll k = n - 1; k >= 2; k--){
            ll i = 0, j = k - 1;
            while(i < j){
                if(a[i] + a[j] == a[k]){
                    oke = 1;
                    break;
                }
                if(a[i] + a[j] < a[k]) i++;
                else j--;
            }
        }
        if(oke) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}