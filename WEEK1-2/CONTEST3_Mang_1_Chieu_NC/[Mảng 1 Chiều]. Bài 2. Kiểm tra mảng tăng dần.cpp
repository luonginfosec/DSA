// Thoi gian troi qua khong the quay tro lai, LuongVD <3 , AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int oke = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i > 0)
        {
            if (a[i] <= a[i - 1])
                oke = 0;
        }
    }
    if (oke)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}