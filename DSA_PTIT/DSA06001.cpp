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
        for(auto &x : a) cin >> x;
        sort(a,a+n);
        ll l = 0, r = n - 1;
        while(l < r){
            cout << a[r] << " " << a[l] << " ";
            l++;
            r--;
        }
        cout << endl;
    }
}