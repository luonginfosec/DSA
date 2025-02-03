//Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, a[100];
void in(){
    for(ll i = 1; i <= n; i++){
        if(a[i] == 1) cout << "B";
        else cout << "A";
    }
    cout << " ";
}
void Try(ll i){
    for(ll j = 0; j <= 1; j++){
        a[i] = j;
        if(i == n) in();
        else Try(i+1);
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        Try(1);
        cout << endl;
    }
}