// Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, a[100], k;
vector<string> result;
void in()
{
    string tmp = "";
    ll cnt = 0;
    for (ll i = 1; i <= n; i++)
    {
        if (a[i] == 0)
        {
            tmp += "A";
        }
        else
            tmp += "B";
    }
    string s(k, 'A');
    ll pos = tmp.find(s);
    while (pos != -1)
    {
        cnt++;
        pos = tmp.find(s, pos + 1); 
    }
    if(cnt == 1){
        result.push_back(tmp);
    }
}
void Try(ll i)
{
    for (ll j = 0; j <= 1; j++)
    {
        a[i] = j;
        if (i == n)
            in();
        else
            Try(i + 1);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> n >> k;
    Try(1);
    cout << result.size() << endl;
    for (auto x : result)
    {
        cout << x << endl;
    }
}