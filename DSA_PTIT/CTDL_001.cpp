// Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, a[100], final = 0;
int tn()
{
    ll l = 0, r = n - 1;
    while (l < r)
    {
        if (a[l] != a[r])
            return 0;
        l++;
        r--;
    }
    return 1;
}
void ktao()
{

    for (ll i = 0; i < n; i++)
    {
        a[i] = 0;
    }
}
void sinh()
{
    int i = n - 1;
    while (i >= 0 && a[i] == 1)
    {
        a[i] = 0;
        i--;
    }
    if (i == -1)
    {
        final = 1;
    }
    else
    {
        a[i] = 1;
    }
}

void in()
{
    if (tn())
    {
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    while (final == 0)
    {
        in();
        sinh();
    }
}