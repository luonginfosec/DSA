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
    for (int i = 0; i < n; i++)
    {
        int oke = 1;
        for (int j = 0; j < i; j++)
        {
            if (a[i] == a[j])
            {
                oke = 0;
                break;
            }
        }
        if (oke)
            cout << a[i] << " ";
    }
}