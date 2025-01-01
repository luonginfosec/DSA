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
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x;
    cin >> x;
    int n1 = 0, n2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > x)
        {
            n1++;
        }
        else if (a[i] < x)
        {
            n2++;
        }
    }
    cout << n2 << endl
         << n1 << endl;
}