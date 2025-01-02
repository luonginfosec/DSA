// Thoi gian troi qua khong the quay tro lai, LuongVD <3 , AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    set<int> se;
    int n;
    cin >> n;
    vector<int> vt;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (se.find(x) == se.end())
        {
            vt.push_back(x);
        }
        se.insert(x);
    }
    for (auto x : vt)
        cout << x << " ";
}