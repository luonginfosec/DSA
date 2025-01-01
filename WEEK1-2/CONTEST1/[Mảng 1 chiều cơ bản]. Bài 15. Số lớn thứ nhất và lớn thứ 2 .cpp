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
    ll s1 = -1e9, s2 = -1e9;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] >= s1)
        {
            s2 = s1;
            s1 = a[i];
        }
        else if (a[i] >= s2)
        {
            s2 = a[i];
        }
    }
    cout << s1 << " " << s2 << endl;
}