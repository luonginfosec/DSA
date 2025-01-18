// Thoi gian troi qua khong the quay tro lai, LuongVD <3 , AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    map<int, int> mp;
    mp[0] = 0;
    int sum = 0;
    int res = -1;
    for (int i = 1; i <= n; i++)
    {
        sum = (sum + a[i] % k + k) % k;
        if (mp.count(sum))
        {
            res = max(res, i - mp[sum]);
        }
        if (mp.count(sum) == 0)
        {
            mp[sum] = i;
        }
    }
    cout << res << endl;
}