//Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    ll a[n];
    for(auto &x : a) cin >> x;
    for(ll i = 0; i < n; i++){
        if(i == 0){
            cout << "Buoc 0: " << a[0] << endl;
            continue;
        }
        ll key = a[i];
        ll j = i - 1;
        while(j >= 0 && a[j] > key){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
        cout << "Buoc " << i << ": ";
        for(ll j = 0; j < i+1; j++){
            cout << a[j] << " ";
        }
        cout << endl;
    }
}