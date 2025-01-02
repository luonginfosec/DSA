// Thoi gian troi qua khong the quay tro lai, LuongVD <3 , AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve1(int n)
{
    set<int> se;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        se.insert(x);
    }
    int q;
    cin >> q;
    while (q--)
    {
        cin >> x;
        if (se.find(x) != se.end())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
void solve2(int n)
{
    map<int, int> mp;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        mp.insert({x, 1});
    }
    int q;
    cin >> q;
    while (q--)
    {
        cin >> x;
        if (mp.find(x) != mp.end())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

void solve3(int n)
{
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int q;
    cin >> q;
    sort(a, a + n);
    while (q--)
    {
        int x;
        cin >> x;
        if (binary_search(a, a + n, x))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    solve1(n);
}