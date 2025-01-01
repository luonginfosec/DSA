// Thoi gian troi qua khong the quay tro lai, LuongVD <3 , AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int maxArr = 1e6 + 1;
int fre[maxArr] = {0};
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
        fre[a[i]]++;
    }
    for (int i = 0; i < maxArr; i++)
    {
        if (fre[i] != 0)
        {
            cout << i << " " << fre[i] << endl;
            fre[i] = 0;
        }
    }
}