//Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    ll x,y;
    cin >> x >> y;
    ll cnt2 = 0, cnt8 = 0, ans = 0, l = 0;
    for(ll r = 0; r < s.size(); r++){
        if(s[r] == '2') ++cnt2;
        else ++cnt8;
        while(cnt2 > x || cnt8 > y){
            if(s[l] == '2') cnt2--;
            else cnt8--;
            l++;
        }
        ans = max(ans , cnt2 + cnt8);
    }
    cout << ans << endl;
}