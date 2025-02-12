//Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void bubble_sort_reverse(vector<ll> &a, ll n) {
    ll cnt = 0;
    for (ll i = n - 1; i > 0; i--) {
        ll oke = 0;
        for (ll j = 0; j < i; j++) {
            if (a[j] > a[j + 1]) {
                oke = 1;
                swap(a[j], a[j + 1]);
            }
        }
        if(oke){
            cout << "Buoc " << ++cnt << ": ";
            for (ll j = 0; j < n; j++) {
                cout << a[j] << " ";
            }
            cout << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<ll> vt;
    ll n;
    cin >> n;
    vt.resize(n);
    for (auto &x : vt) cin >> x;
    
    bubble_sort_reverse(vt, vt.size());
    
    
}
