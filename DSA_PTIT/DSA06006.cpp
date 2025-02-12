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
        ll cnt0 = 0, cnt1 = 0, cnt2 = 0;
        for(auto &x : a){
            cin >> x;
            if(x == 0){
                cnt0++;
            }
            else if(x == 1){
                cnt1++;
            }
            else{
                cnt2++;
            }
        }
        for(ll i = 0; i < cnt0; i++){
            cout << "0 ";
        }
        for(ll i = 0; i < cnt1; i++){
            cout << "1 ";
        }
        for(ll i = 0; i < cnt2; i++){
            cout << "2 ";
        }
        cout << endl;
    }
}