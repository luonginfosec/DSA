// Thoi gian troi qua khong the quay tro lai, LuongVD <3 , AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a[1000005] = {0};
void sang()
{
    for (ll i = 0; i < 1000005; i++)
        a[i] = 1;
    a[0] = a[1] = 0;
    for (ll i = 2; i <= 1000; i++)
    {
        if (a[i])
        {
            for (ll j = i * i; j <= 1000000; j += i)
            {
                a[j] = 0;
            }
        }
    }
    ll sum = 0;
    for (ll i = 0; i <= 1000005; i++)
    {
        if (a[i] == 1)
        {
            sum++;
        }
        a[i] = sum;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    sang();
    ll q;
    cin >> q;
    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        cout << a[r] - a[l - 1] << endl;
    }
}