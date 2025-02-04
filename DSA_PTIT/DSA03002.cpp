//Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll maxStr(string s){
    for(ll i = 0; i < s.size(); i++){
        if(s[i] == '5') s[i] = '6';
    }
    return stoll(s);
}
ll minStr(string s){
    for(ll i = 0; i < s.size(); i++){
        if(s[i] == '6') s[i] = '5';
    }
    return stoll(s);
}
ll minStr(){

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string x,y;
    cin >> x >> y;
    cout << minStr(x) + minStr(y) << " " << maxStr(x) + maxStr(y) << endl;
}