// Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool cmp(const pair<ll, ll>& a, const pair<ll, ll>& b) {
    if (a.second == b.second) {
        return a.first < b.first;
    } else {
        return a.second > b.second;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll a[n];
        map<ll, ll> mp;
        for (auto &x : a) {
            cin >> x;
            mp[x]++;
        }

        vector<pair<ll, ll>> vec(mp.begin(), mp.end());

        sort(vec.begin(), vec.end(), cmp);

        for (const auto& x : vec) {
            for(ll j = 0; j < x.second; j++){
                cout << x.first << " ";
            }
        }
        cout << endl;
    }
    return 0;
}