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
        ll n,k;
        cin >> n >> k;
        ll a[n];
        for(auto &x : a) cin >> x;
        sort(a,a+n);
        if(binary_search(a,a+n,k)){
            cout << "1" << endl;
        }
        else{
            cout << "-1" << endl;
        }
    }
}