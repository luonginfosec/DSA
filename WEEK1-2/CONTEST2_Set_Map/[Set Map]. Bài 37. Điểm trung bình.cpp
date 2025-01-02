// Thoi gian troi qua khong the quay tro lai, LuongVD <3 , AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    map<string, vector<pair<ll, ll>>> mp;
    string s;
    while (getline(cin, s))
    {
        stringstream ss(s);
        string x, y, z;
        ll b, c;
        ss >> x;
        ss >> y;
        ss >> z;
        b = stoll(y);
        c = stoll(z);
        mp[x].push_back({b, c});
    }
    for (auto x = mp.rbegin(); x != mp.rend(); x++)
    {
        cout << x->first << " : ";
        ll tongTin = 0, tong = 0;
        for (auto y : x->second)
        {
            tongTin += y.first;
            tong += y.first * y.second;
        }
        cout << fixed << setprecision(2) << (double)tong / tongTin << endl;
    }
}