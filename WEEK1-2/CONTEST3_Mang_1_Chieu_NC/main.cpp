// Thoi gian troi qua khong the quay tro lai, LuongVD <3 , AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, m;
    cin >> n >> m;
    ll a[n], b[m];
    for (auto &x : a)
        cin >> x;
    for (auto &x : b)
        cin >> x;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            cout << a[i] << " ";
            i++;
        }
        else
        {
            cout << b[j] << " ";
            j++;
        }
    }
    if (i < n)
    {
        cout << a[i] << " ";
    }
    if (j < m)
    {
        cout << b[j] << " ";
    }
}