// Thoi gian troi qua khong the quay tro lai, LuongVD <3 , AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int nt(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return n > 1;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int a[n];
    ll sum = 0;
    int cnt = 0;
    for (auto &x : a)
    {
        cin >> x;
        if (nt(x))
        {
            cnt++;
            sum += x;
        }
    }
    cout << fixed << setprecision(3) << (double)sum / cnt << endl;
}