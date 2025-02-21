#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> nt;
ll a[205];
ll s, p, n;
vector<vector<ll>> res;

void sang() {
    fill(a, a + 205, 1);
    a[0] = a[1] = 0;
    for (ll i = 2; i * i <= 200; i++) {
        if (a[i]) {
            for (ll j = i * i; j <= 200; j += i) {
                a[j] = 0;
            }
        }
    }
    for (ll i = 2; i <= 200; i++) {
        if (a[i]) nt.push_back(i);
    }
}

ll x[205];
void Try(ll i, ll st, ll sum) {
    for (ll j = st; j < nt.size(); j++) {  
        if (nt[j] >= p && sum + nt[j] <= s && i <= n && nt[j] > p) { 
            x[i] = nt[j];
            if (sum + nt[j] == s && i == n) {
                vector<ll> tmp(x + 1, x + i + 1);
                res.push_back(tmp);
            } else {
                Try(i + 1, j + 1, sum + nt[j]);
            }
        }
    }
}

int main() {
    sang();
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        res.clear();
        cin >> n >> p >> s;
        Try(1, 0, 0);
        cout << res.size() << endl;

            for (auto &x : res) {
                for (auto y : x) cout << y << " ";
                cout << endl;
            }
    
    }
}
