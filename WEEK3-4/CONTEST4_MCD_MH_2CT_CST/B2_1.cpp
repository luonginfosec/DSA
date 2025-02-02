//Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,m;
    cin >> n >> m;
    ll a[n], b[m];
    for(auto &x : a) cin >> x;
    for(auto &x : b) cin >> x;
    ll i = 0,j = 0;
    while(j < m){
        if(b[j] > a[i] && i < n){
            i++;
        }
        else{
            j++;
            cout << i << " ";
        }
    }
}