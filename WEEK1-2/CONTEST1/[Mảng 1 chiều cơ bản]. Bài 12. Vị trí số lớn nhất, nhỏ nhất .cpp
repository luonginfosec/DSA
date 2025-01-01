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
    int valMax = -1e9, valMin = 1e9;
    int idxMax = 0, idxMin = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= valMin)
        {
            valMin = a[i];
            idxMin = i;
        }
        if (a[i] > valMax)
        {
            valMax = a[i];
            idxMax = i;
        }
    }
    cout << idxMin << " " << idxMax << endl;
}
