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
    set<int> se;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        se.insert(x);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            int x;
            cin >> x;
            se.insert(x);
        }
        else if (t == 2)
        {
            int x;
            cin >> x;
            if (se.find(x) != se.end())
            {
                se.erase(x);
            }
        }
        else if (t == 3)
        {
            int x;
            cin >> x;
            if (se.find(x) != se.end())
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}