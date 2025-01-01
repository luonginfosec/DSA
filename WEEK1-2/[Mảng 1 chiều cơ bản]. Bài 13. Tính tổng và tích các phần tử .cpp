// Thoi gian troi qua khong the quay tro lai, LuongVD <3 , AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll mod = 1e9 + 7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int a[n];
    ll tong = 0, tich = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        tong += a[i];
        tong %= mod;
        tich *= a[i];
        tich %= mod;
    }
    cout << tong << endl
         << tich << endl;
}