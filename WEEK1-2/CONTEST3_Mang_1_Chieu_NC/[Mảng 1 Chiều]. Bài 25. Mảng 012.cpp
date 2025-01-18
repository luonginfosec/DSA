// Thoi gian troi qua khong the quay tro lai, LuongVD <3 , AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll x;
    ll c1 = 0, c2 = 0, c3 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x == 0)
        {
            c1++;
        }
        else if (x == 1)
        {
            c2++;
        }
        else if (x == 2)
        {
            c3++;
        }
    }
    for (int i = 0; i < c1; i++)
    {
        cout << "0 ";
    }
    for (int i = 0; i < c2; i++)
    {
        cout << "1 ";
    }
    for (int i = 0; i < c3; i++)
    {
        cout << "2 ";
    }
}