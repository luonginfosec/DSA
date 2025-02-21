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
        ll n1,n2,n3;
        cin >> n1 >> n2 >> n3;
        vector<ll> a(n1);
        vector<ll> b(n2);
        vector<ll> c(n3);
        for(auto &x : a) cin >> x;
        for(auto &x : b) cin >> x;
        for(auto &x : c) cin >> x;
        vector<ll> res;
        ll i = 0, j = 0, z = 0;
        while(i < n1 && j < n2 && z < n3){
            if(a[i] == b[j] && a[i] == c[z]){
                res.push_back(a[i]);
                i++;
                j++;
                z++;
            }
            else if(a[i] < b[j]){
                i++;
            }
            else if(b[j] < c[z]){
                j++;
            }
            else{
                z++;
            }
        }
        if(res.size() > 0){
            for(auto x : res) cout << x << " ";
            cout << endl;
        }
        else{
            cout << "-1" << endl;
        }
    }
}