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
    int x = 0, y = 0;
    int oke = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 25)
            x++;
        else if (a[i] == 50)
        {
            if (x >= 1)
            {
                x--;
            }
            else
            {
                oke = 0;
                break;
            }
            y++;
        }
        else if (a[i] == 100)
        {
            if (y >= 2 && x >= 1)
            {
                y -= 2;
                x -= 1;
            }
            else if (x >= 3)
            {
                x -= 3;
            }
            else
            {
                oke = 0;
                break;
            }
        }
    }
    if (oke)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}