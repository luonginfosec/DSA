//Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll find(ll a[], ll l, ll r, ll x){
    while(l <= r){
        ll mid = l + (r-l) / 2;
        if(a[mid] == x){
            return mid + 1;
        }
        else if(a[mid] < x){
            l++;
        }
        else{
            r--;
        }
    }
    return -1;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        ll n,x;
        cin >> n >> x;
        ll a[n];
        ll pos = 0;
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            if(i != 0 && a[i] < a[i-1]){
                pos = i;
            }
        }
        if(x > a[n - 1]){
            cout << find(a,0,pos-1,x) << endl;
        }
        else{
            cout << find(a,pos,n-1,x) << endl;
        }
    }
}