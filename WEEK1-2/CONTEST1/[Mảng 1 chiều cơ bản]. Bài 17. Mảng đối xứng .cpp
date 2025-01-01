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
    int l = 0, r = n - 1;
    int oke = 1;
    while (l <= r)
    {
        if (a[l] != a[r])
        {
            oke = 0;
            break;
        }
        l++;
        r--;
    }
    if (oke)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}