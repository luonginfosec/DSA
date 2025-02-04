// Thoi gian troi qua khong the quay tro lai. LuongVD <3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, k, a[1001] = {0};
string s;
vector<string> vt;
set<string> se;
void in()
{
    for (ll i = 1; i <= k; i++)
    {
        cout << vt[a[i] - 1] << " ";
    }

    cout << endl;
}
void Try(ll i)
{
    for (ll j = a[i - 1] + 1; j <= se.size() - k + i; j++)
    {
        a[i] = j;
        if (i == k)
        {
            in();
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
    cin >> n >> k;
    cin.ignore();
    getline(cin, s);
    stringstream ss(s);
    while (ss >> s)
    {
        se.insert(s);
    }
    for(auto x : se) vt.push_back(x);
    a[0] = 0;
    Try(1);
}