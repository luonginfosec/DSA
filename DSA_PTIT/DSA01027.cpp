//Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,a[1001],b[1001],final;
void sinh(){
    ll i = n - 1;
    while(i >= 1 && a[i] > a[i+1]){
        i--;
    }
    if(i == 0) final = 1;
    else {
        ll j = n;
        while(a[i] > a[j]) j--;
        swap(a[i],a[j]);
        reverse(a+i+1,a+n+1);
        for(ll j = 1; j <= n; j++){
            cout << a[j] << " ";
        }
        cout << endl;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for(ll i = 1;i <= n; i++) cin >> a[i];
    sort(a+1,a+n+1);
    for(ll i = 1;i <= n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    while(!final) sinh();
}