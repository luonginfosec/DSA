#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n, k, a[1001], b[1001], szArr;
ll oke = -1;
void Try(ll j, ll sum) {
    if (sum == k) {
        oke = 1;
        cout << "[";
        for (ll i = 0; i < szArr; i++) {
            cout << b[i];
            if (i != szArr - 1) cout << " ";
        }
        cout << "] ";
        return;
    }
    
    for (ll i = j; i <= n; i++) {
        if (i > j && a[i] == a[i - 1]) continue;

        if (sum + a[i] > k) break;
        
        b[szArr++] = a[i];
        Try(i + 1, sum + a[i]);
        szArr--;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        oke = -1;
        cin >> n >> k;
        for (ll i = 1; i <= n; i++) cin >> a[i];
        sort(a + 1, a + n + 1);  
        szArr = 0;
        Try(1, 0);
        if(oke == -1) cout << oke;
        cout << endl;
    }
}
