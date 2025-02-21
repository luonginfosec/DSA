//Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;   
    ll cnt = 0;
    ll a[256] = {0};
    for (auto &x : s) {
        if (a[x] == 0) cnt++;
        a[x]++;
    }
    ll r = 0, l = 0, cntT = 0, res = 1e9;
    ll ds[256] = {0}; 
    while (r < s.size()) {
        ds[s[r]]++;
        if (ds[s[r]] == 1) cntT++; 
        while (cntT == cnt) {
            res = min(res, r - l + 1);
            ds[s[l]]--; 
            if (ds[s[l]] == 0) cntT--;
            l++; 
        }
        r++; 
    }
    cout << res << endl;
}
