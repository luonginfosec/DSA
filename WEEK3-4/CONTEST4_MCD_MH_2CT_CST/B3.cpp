//Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll pre[1005][1005];
ll a[1005][1005];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,m;
    cin >> n >> m;
    for(ll i = 1; i <= n; i++){
        for(ll j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
    for(ll i = 1; i <= n; i++){
        for(ll j = 1; j <= m; j++){
            pre[i][j] = pre[i-1][j] + pre[i][j-1] - pre[i-1][j-1] + a[i][j];
        }
    }
    ll q;
    cin >> q;
    while(q--){
        ll x1,x2,y1,y2;
        cin >> x1 >> x2 >> y1 >> y2;
        cout << pre[x2][y2] - pre[x1-1][y2] - pre[x2][y1-1] + pre[x1-1][y1-1] << endl;
    }
}
