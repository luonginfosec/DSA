// Thoi gian troi qua khong the quay tro lai, LuongVD <3 , AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int a[n];
    for (auto &x : a)
    {
        cin >> x;
    }
    sort(a, a + n);
    int cnt = 0;
    int tmp = a[0];
    for (int i = 0; i < n; i++)
    {
        if (tmp == a[i])
        {
            cnt++;
        }
        else
        {
            break;
        }
    }
    cout << cnt << endl;
}