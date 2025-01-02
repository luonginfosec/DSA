// Thoi gian troi qua khong the quay tro lai, LuongVD <3 , AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve1(int n)
{
    set<int> se;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        se.insert(x);
    }
    cout << se.size();
}
void solve2(int n)
{
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp.insert({x, 1});
    }
    cout << mp.size();
}
void solve3(int n)
{
    int a[n];
    for (auto &x : a)
        cin >> x;
    sort(a, a + n);
    int cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] != a[i - 1])
            cnt++;
    }
    cout << cnt << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    solve2(n);
}