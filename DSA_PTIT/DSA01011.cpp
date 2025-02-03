//Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a[10001] = {0};
ll n, x;
string s;

void sinh() {
    ll i = n - 1;
    while (i >= 1 && a[i] >= a[i+1]) 
        i--;
    
    cout << x << " ";
    if (i == 0) {
        cout << "BIGGEST";
    } else {
        ll j = n;
        while (a[j] <= a[i]) 
            j--;
        
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
        for (ll k = 1; k <= n; k++) {
            cout << a[k];
        }
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        cin >> x >> s;
        n = s.size();
        for (ll i = 1; i <= n; i++) {
            a[i] = s[i-1] - '0'; 
        }
        sinh();
    }
}