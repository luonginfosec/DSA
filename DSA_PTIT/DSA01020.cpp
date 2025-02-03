//Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a[1000] = {0};
ll n;
void sinh(){
    
    ll i = n;
    while(i >= 1 && a[i] == 0){
        a[i] = 1;
        i--;
    }
    if(i == 0){

    }
    else{
        a[i] = 0;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        for(ll i = 1; i <= s.size(); i++){
            a[i] = s[i-1] - '0';
        }
        n = s.size();
        sinh();
        for(ll i = 1; i <= n; i++){
            cout << a[i];
        }
        cout << endl;
    }
}