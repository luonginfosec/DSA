// Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n;
string s;
char a[2] = {'6', '8'};
int check()
{
    if (s.find("6666") != string::npos || s.find("88") != string::npos)
        return 0;
    return 1;
}
void Try(ll i)
{
    for (ll j = 0; j < 2; j++)
    {
        s[i] = a[j];
        if (i == n)
        {
            if (check())
                cout << s << endl;
        }
        else
        {
            Try(i + 1);
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    s.resize(n);
    s[0] = '8';
    s.back() = '6';
    n -= 2;
    Try(1);
}