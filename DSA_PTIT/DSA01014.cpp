//Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,k,s,ans;
void sinh(ll start, ll cnt, ll sum){
    if(cnt == k){
        if(sum == s) ans++;
        return;
    }
    for(ll i = start; i <= n; i++){
        if(sum + i > s){
            break;
        }
        sinh(i+1,cnt+1,sum + i);
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    while(true){
        cin >> n >> k >> s;
        if(n == 0 && k == 0 && s == 0){
            break;
        }
        ans = 0;
        sinh(1, 0, 0);
        cout << ans << endl;
    }
}