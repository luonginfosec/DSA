// Thoi gian troi qua khong the quay tro lai, LuongVD <3 , AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int oke = 0;
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0 && a[i] % 2 == 0)
        {
            oke = 1;
            cout << a[i] << " ";
        }
    }
    if (!oke)
        cout << "NONE" << endl;
}