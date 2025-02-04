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
        for(auto &x : a) cin >> x;
        ll sum1 = 0, sum2 = 0;
        sort(a,a+n);
        for(ll i = 0; i < n; i++){
            if(i < min(n-k,k)){
                sum1 += a[i];
            }
            sum2 += a[i];
        }
        cout << sum2 - sum1 * 2 << endl;
    }
}