// Thoi gian troi qua khong the quay tro lai, LuongVD < 3, AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> vt;
    int n;
    cin >> n;
    int a[n];
    int valMax = -1e9;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i == 0)
        {
            vt.push_back(a[i]);
            valMax = a[i];
        }
        else
        {
            if (a[i] > valMax)
            {
                vt.push_back(a[i]);
                valMax = a[i];
            }
        }
    }
    for (auto x : vt)
    {
        cout << x << " ";
    }
}