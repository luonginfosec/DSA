// Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, final;
ll a[10001], b[10001];
vector<vector<ll>> vt;
void sinh()
{
    ll i = n - 1;
    while (i >= 1 && b[i] > b[i + 1])
    {
        i--;
    }
    if (i == 0)
    {
        final = 1;
    }
    else
    {
        int j = n;
        while (b[i] > b[j])
        {
            j--;
        }
        swap(b[i], b[j]);
        reverse(b + i + 1, b + n + 1);
        vector<ll> tmp;
        for (ll j = 1; j <= n; j++)
        {
            tmp.push_back(b[j]);
        }
        vt.push_back(tmp);
    }
}
void ktao()
{
    final = 0;
    vt.clear();
    cin >> n;
    vector<ll> tmp;
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[i] = i;
        tmp.push_back(i);
    }
    vt.push_back(tmp);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        ktao();
        while (!final)
        {
            sinh();
        }
        ll oke = 0;
        for (ll i = 0; i < vt.size(); i++)
        {
            ll tmp = 1;
            for (ll j = 1; j <= n; j++)
            {
                if (a[j] != vt[i][j - 1])
                {
                    tmp = 0;
                    break;
                }
            }
            if (tmp)
            {
                cout << i + 1 << endl;
                oke++;
            }
            if (oke)
                break;
        }
    }
}