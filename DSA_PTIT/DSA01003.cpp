// Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a[10005], n;
void ktao()
{
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
}
void in()
{
    for (ll i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void sinh()
{
    ll i = n - 1;
    while (i >= 1 && a[i] > a[i + 1])
    {
        i--;
    }
    if (i == 0)
    {
        for (ll i = n; i >= 1; i--)
        {
            a[i] = i;
        }
    }
    else
    {
        ll j = n;
        while (a[i] > a[j])
        {
            j--;
        }
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ktao();
        sinh();
        in();
    }
}