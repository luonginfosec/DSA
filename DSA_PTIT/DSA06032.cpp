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
        ll n,K;
        cin >> n >> K;
        ll a[n];
        ll cnt = 0;
        for(auto &x : a) cin >> x;
        sort(a,a+n);
        for(ll i = 0; i < n - 2; i++){
            ll j = i + 1, k = n - 1;
            while(j < k ){
                if(a[i] + a[j] + a[k] < K){
                    cnt += k-j;
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        cout << cnt <<  endl;
    }
}