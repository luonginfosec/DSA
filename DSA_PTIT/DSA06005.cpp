//Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        ll n,m;
        cin >> n >> m;
        set<ll> se,se1,se2;        
        for(ll i = 0; i < n; i++){
            ll x;
            cin >> x;
            se.insert(x);
            se1.insert(x);
        }
        for(ll i = 0; i < m; i++){
            ll x;
            cin >> x;
            se.insert(x);
            se2.insert(x);
        }
        for(auto x : se){
            cout << x << " ";
        }
        cout << endl;
        for(auto x : se1){
            if(se2.find(x) != se2.end()){
                cout << x << " ";
            }
        }
        cout << endl;
    }
}