// Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, a[1000], final = 0;
vector<vector<ll>> vt;
void ktao()
{
    for (ll i = 1; i <= n; i++)
    {
        a[i] = i;
    }
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
        final = 1;
    }
    else
    {
        ll j = n;
        while (a[i] > a[j])
        {
            j--;
        }
        swap(a[i], a[j]);
        reverse(a+i+1,a+n+1);
    }
}
void in(vector<ll> vt)
{
    for (ll i = 0; i < vt.size(); i++)
    {
        cout << vt[i];
    }
    cout << " ";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        vt.clear();
        cin >> n;
        final = 0;
        ktao();
        while (!final)
        {
            vector<ll> tmp;
            for(ll i = 1; i <= n; i++){
                tmp.push_back(a[i]);
            }
            vt.push_back(tmp);
            sinh();
        }
        for(int i = vt.size() - 1; i >= 0; i--){
            in(vt[i]);
        }
        cout << endl;
    }
}