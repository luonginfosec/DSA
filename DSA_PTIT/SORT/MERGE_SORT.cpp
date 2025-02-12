// Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n;

void merge(vector<ll> &a, ll l, ll m, ll r) {
    ll n1 = m - l + 1;
    ll n2 = r - m;

    vector<ll> L(n1), R(n2);

    for (ll i = 0; i < n1; i++) {
        L[i] = a[l + i];
    }
    for (ll j = 0; j < n2; j++) {
        R[j] = a[m + 1 + j];
    }

    ll i = 0, j = 0, k = l;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            a[k] = L[i];
            i++;
        } else {
            a[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        a[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        a[k] = R[j];
        j++;
        k++;
    }
}

void merge_sort(vector<ll> &a, ll l, ll r) {
    if (l < r) {
        ll m = l + (r - l) / 2;
        merge_sort(a, l, m);
        merge_sort(a, m + 1, r);
        merge(a, l, m, r);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<ll> vt = {2, 5, 1, 24, 12, 99, 0};
    n = vt.size();
    merge_sort(vt, 0, n - 1);
    for (auto x : vt) {
        cout << x << " ";
    }
}
