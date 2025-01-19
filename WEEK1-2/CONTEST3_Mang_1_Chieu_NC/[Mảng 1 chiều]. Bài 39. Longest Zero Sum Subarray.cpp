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
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll maxLen = 0, start = 0, end = 0;
    for (ll i = 0; i < n; i++)
    {
        ll curr_sum = 0;
        for (ll j = i; j < n; j++)
        {
            curr_sum += a[j];
            if (curr_sum == 0)
            {
                if (j - i + 1 > maxLen)
                {
                    maxLen = j - i + 1;
                    start = i;
                    end = j;
                }
            }
        }
    }
    if (maxLen == 0)
        cout << "NOT FOUND";
    else
    {
        for (ll i = start; i <= end; i++)
        {
            cout << a[i] << " ";
        }
    }
}
