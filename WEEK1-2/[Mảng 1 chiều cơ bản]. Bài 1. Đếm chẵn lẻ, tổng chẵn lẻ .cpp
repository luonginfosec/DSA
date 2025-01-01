// Thoi gian troi qua khong the quay tro lai, LuongVD <3 , AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (auto &x : a)
        cin >> x;
    ll sumEven = 0, sumOdd = 0;
    ll cntEven = 0, cntOdd = 0;

    for (auto x : a)
    {
        if (x % 2 == 0)
        {
            cntEven++;
            sumEven += x;
        }
        else
        {
            cntOdd++;
            sumOdd += x;
        }
    }
    cout << cntEven << endl;
    cout << cntOdd << endl;
    cout << sumEven << endl;
    cout << sumOdd << endl;
}