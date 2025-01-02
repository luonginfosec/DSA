// Thoi gian troi qua khong the quay tro lai, LuongVD <3 , AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    map<string, vector<string>> mp;
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string match;
        getline(cin, match);
        string a, b;
        int pos = match.find(" - ");
        a = match.substr(0, pos);
        b = match.substr(pos + 3);
        mp[a].push_back(b);
        mp[b].push_back(a);
    }
    for (auto &x : mp)
    {
        sort(x.second.begin(), x.second.end());
    }
    for (auto x : mp)
    {
        cout << x.first << " : ";
        for (int i = 0; i < x.second.size(); i++)
        {
            cout << x.second[i];
            if (i != x.second.size() - 1)
                cout << ", ";
        }
        cout << endl;
    }
}