//Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,k, a[10000] , final;
void ktao(){
    for(ll i = 1; i <= k; i++){
        cin >> a[i];
    }
}
void sinh(){
    ll i = k;
    while(i >= 1 && a[i] == n-k+i){
        i--;
    }
    if(i == 0){
        for(ll i = 1; i <= k; i++){
            a[i] = i;
        }
    }
    else{
        a[i]++;
        for(ll j = i + 1; j <= n; j++){
            a[j] = a[j-1] + 1;
        }
    }
}
void in(){
    for(ll i = 1; i <= k; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        ktao();
        sinh();
        in();
    }
}