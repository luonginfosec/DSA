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
    int fre[1001] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        fre[a[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (fre[a[i]] != 0)
        {
            cout << a[i] << " " << fre[a[i]] << endl;
            fre[a[i]] = 0;
        }
    }
}