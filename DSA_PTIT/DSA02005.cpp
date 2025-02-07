//Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
string s;
ll a[1001] = {0};
ll n,final;
void ktao(){
    final = 0;
    for(ll i = 1; i <= n; i++){
        a[i] = i;
    }
}
void in(){
    for(ll i = 1; i <= n; i++){
        cout << s[a[i] - 1];
    }
    cout << " ";
}
void sinh(){
    ll i = n - 1;
    while(i >= 1 && a[i] > a[i+1]){
        i--;
    }
    if(i == 0){
        final = 1;
    }
    else{
        ll j = n;
        while(a[i] > a[j]){
            j--;
        }
        swap(a[i],a[j]);
        reverse(a+i+1,a+n+1);
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        cin >> s;
        n = s.size();
        ktao();
        while(!final){
            in();
            sinh();
        }
        cout << endl;
    }
} 