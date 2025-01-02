// Thoi gian troi qua khong the quay tro lai, LuongVD <3 , AC AC AC PLEASE
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    set<string> se;
    while (cin >> s)
    {
        se.insert(s);
    }
    cout << se.size() << endl;
    cout << *(se.begin()) << " " << *(se.rbegin()) << endl;
}