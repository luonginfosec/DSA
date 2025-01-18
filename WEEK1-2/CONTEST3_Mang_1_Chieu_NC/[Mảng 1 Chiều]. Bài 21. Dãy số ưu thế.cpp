// Thoi gian troi qua khong the quay tro lai, LuongVD <3 , AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll x;
    vector<ll> vt;
    ll c = 0, l = 0;
    while (cin >> x)
    {
        vt.push_back(x);
        if (x % 2 == 0)
            c++;
        else
            l++;
    }
    if (vt.size() % 2 == 0 && c > l)
    {
        cout << "YES" << endl;
    }
    else if (vt.size() % 2 == 1 && c < l)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}