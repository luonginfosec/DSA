// Thoi gian troi qua khong the quay tro lai, LuongVD <3 , AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    set<int> se, se1, se2;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        se.insert(x);
        se2.insert(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        se1.insert(x);
        se2.insert(x);
    }
    for (auto x : se)
    {
        if (se1.find(x) != se1.end())
        {
            cout << x << " ";
        }
    }
    cout << endl;

    for (auto x : se2)
    {
        cout << x << " ";
    }
}