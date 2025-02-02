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
    ll a[n];
    for (auto &x : a)
        cin >> x;
    sort(a, a + n);
    ll minA = 0, minB = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            minA = minA * 10 + a[i];
        }
        else
        {
            minB = minB * 10 + a[i];
        }
    }
    cout << minA + minB << endl;
}