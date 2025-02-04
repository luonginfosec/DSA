//Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,k,final;
ll a[1001];
void in(){
    for(ll i = 1; i <= k; i++){
        cout << char(a[i] - 1 + 'A');
    }
    cout << endl;
}
void sinh(){
    ll i = k;
    while(i >= 1 && a[i] == n - k + i){
        i--;
    }
    if(i == 0){
        final = 1;
    }
    else{
        a[i]++;
        for(ll j = i + 1; j <= k; j++){
            a[j] = a[j-1] + 1;
        }
        in();
    }   
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        final = 0;
        for(ll i = 1; i <= k; i++){
            a[i] = i;
        }
        in();
        while(!final) sinh();
    }
}