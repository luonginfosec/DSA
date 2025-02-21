// Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, t;
    cin >> s >> t;
    int dT[256] = {0}, cntT = 0;
    for (char c : t)
    {
        dT[c]++;
        if (dT[c] == 1)
            cntT++;
    }
    ll l = 0, r = 0, dS[256] = {0}, cntS = 0, st;
    ll res = 1e9;
    while (r < s.length())
    {
        dS[s[r]]++;
        if (dT[s[r]] && dS[s[r]] == dT[s[r]])
        {
            cntS++;
        }
        if (cntS == cntT)
        {
            while (1)
            {
                if (dS[s[l]] - 1 >= dT[s[l]])
                {
                    dS[s[l]]--;
                    l++;
                }
                else
                {
                    break;
                }
            }
            if (r - l + 1 < res)
            {
                st = l;
                res = r - l + 1;
            }
        }
        r++;
    }
    cout << res << endl;
    for (ll i = st; i < st + res; i++)
        cout << s[i];
}