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
        cin >> x;
    int k;
    cin >> k;
    int cnt = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (i != j)
            {
                if (a[i] + a[j] == k)
                {
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;
}