// Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        cin >> s;
        ll i = s.size() - 1;
        while (i >= 0 && s[i] == '1')
        {
            s[i] = '0';
            i--;
        }
        if (i == -1)
        {
            for (ll i = 0; i < s.size(); i++)
            {
                cout << "0";
            }
            continue;
        }
        else
        {
            s[i] = '1';
        }
        for (ll i = 0; i < s.size(); i++)
        {
            cout << s[i];
        }
        cout << endl;
    }
}