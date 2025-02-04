// Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n, a[1001] = {0},b[1001];
vector<vector<ll>> vt;

void Try(ll i) {
    if (i <= 0) {
        return;
    } else {
        vector<ll> tmp(i);
        for (ll j = 0; j < i; j++) {
            tmp[j] = a[j] + a[j + 1];
        }
        vt.push_back(tmp);
        for (ll j = 0; j < i; j++) {
            a[j] = tmp[j];
        }
        Try(i - 1);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        if (n) {
            for (ll i = 0; i < n; i++){
                cin >> a[i];
                b[i] = a[i];
            }
            
            Try(n - 1);
            reverse(vt.begin(),vt.end());
            for (auto &x : vt) {
                cout << "[";
                for (ll i = 0; i < x.size(); i++) {
                    cout << x[i];
                    if (i != x.size() - 1)
                        cout << " ";
                }
                cout << "] ";
            }
            cout << "[";
            for (ll i = 0; i < n; i++) {
                cout << b[i];
                if (i != n - 1)
                    cout << " ";
            }
            cout << "] ";
            vt.clear();
        }
        cout << endl;
    }
    return 0;
}
