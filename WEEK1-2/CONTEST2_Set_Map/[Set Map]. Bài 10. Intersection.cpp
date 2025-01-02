// Thoi gian troi qua khong the quay tro lai, LuongVD <3 , AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    set<int> se, se1;
    vector<int> vt;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        se.insert(x);
        vt.push_back(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        se1.insert(x);
    }
    for (auto x : vt)
    {
        if (se1.find(x) != se1.end() && se.find(x) != se.end())
        {
            cout << x << " ";
            se.erase(x);
        }
    }
}
void solve1()
{
    vector<pair<int, int>> vt;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vt.push_back({x, 1});
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        for (auto &it : vt)
        {
            if (it.first == x)
            {
                it.second = 2;
            }
        }
    }
    vector<int> result;
    for (auto &x : vt)
    {
        if (x.second == 2)
        {
            if (find(result.begin(), result.end(), x.first) == result.end())
            {
                result.push_back(x.first);
            }
            x.second = 0;
        }
    }
    for (auto x : result)
        cout << x << " ";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve1();
}