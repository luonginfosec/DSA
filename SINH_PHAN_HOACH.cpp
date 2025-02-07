//Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n, a[1001], cnt;
bool final;

void in() {
    for (ll i = 1; i <= cnt; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void sinh() {
    ll i = cnt;
    while (i >= 1 && a[i] == 1) {
        i--;
    }
    if (i == 0) {
        final = true;
    } else {
        a[i]--;
        ll d = cnt - i + 1;
        ll q = d / a[i];
        ll r = d % a[i];
        cnt = i;
        for (ll j = 1; j <= q; j++) {
            a[cnt + j] = a[i];
        }
        cnt += q;
        if (r != 0) {
            cnt++;
            a[cnt] = r;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    a[1] = n;
    final = false;
    cnt = 1;
    while (!final) {
        in();
        sinh();
    }
    return 0;
}
